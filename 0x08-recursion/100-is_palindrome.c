#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int len(char *s);
int check_palindrome(char *s, int length, int index);
int is_palindrome(char *s);

/**
 * len - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */
int len(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += len(s + 1);
	}
	return (length);
}

/**
 * check_palindrome - checks if a string is palindromic
 * @s: the stringto be checked
 * @length: the length of the string
 * @index: the index of the string ot be checked
 *
 * Return: if the string is palindrome - 1
 *	   if not - 0
 */
int check_palindrome(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
		return (1);
	if (s[index] == s[length - index - 1])
		return (check_palindrome(s, length, index + 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is palindromic
 * @s: the string to be checked
 *
 * Return: if the string is palindrome - 1
 *	   if not - 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int length = len(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, length, index));
}

