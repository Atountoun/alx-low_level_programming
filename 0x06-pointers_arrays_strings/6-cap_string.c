#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * cap_string - 
 *
 * @s : string to be capitalized
 *
 * Return : pointer to the result
 */
char *cap_string(char *s)
{
	char *ptr = s;
	char sep[] = "\n\t,; .!?\"(){}";
	int i;
	int flag;

	while (*s != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*s == sep[i])
			{
				flag = 1;
				break;
			}
			flag = 0;
		}
		if (flag)
		{
			if (*s == '\t')
				*s = ' ';
			while (flag)
			{
				s++;
				for (i = 0; i < 13; i++)
				{
					if (*s == sep[i])
					{
						flag = 1;
						break;
					}
					flag = 0;
				}
			}
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;
		}
		s++;
	}
	return (ptr);
}
