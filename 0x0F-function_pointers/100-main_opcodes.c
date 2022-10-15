#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of itself
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int bytes, i = 0;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < bytes)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");

	return (0);
}
