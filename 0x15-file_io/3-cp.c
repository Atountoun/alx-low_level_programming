#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - create a buffer to use for the reading
 * @file: a pointer to the file
 *
 * Return: the created buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes a file
 * @fd:  the file descriptor number
 *
 * Return: nothing
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies one file's content to another one
 * @argc: the number of arguments passed by cmd line
 * @argv: a pointer to an aray of elements passed by cmd line
 *
 * Return: 1 if success, error on failure
 */
int main(int argc, char *argv[])
{
	int source, target, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	source = op(argv[1], O_RDONLY);
	rd = read(source, buffer, 1024);
	target = op(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(90);
		}
		wr = write(target, buffer, rd);
		if (target == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(source, buffer, 1024);
		target = open(argv[2], O_CREAT | O_WRONLY | O_APPEND);
	} while(rd > 0);

	free(buffer);
	close_file(source);
	close_file(target);

	return (0);
}
