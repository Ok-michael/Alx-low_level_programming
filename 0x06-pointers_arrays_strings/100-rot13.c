#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - this function take encripts a string using
 * rot13
 * @words: this function takes a string as input
 * Return: this function returns the encripted
 * string
 */
char *rot13(char *words)
{
	char *encr_word = (char *)malloc(strlen(words) + 1);
	int i;

	if (words == NULL)
		return (NULL);
	if (encr_word == NULL)
		return (NULL);
	for (i = 0; words[i] != '\0'; i++)
	{
		char c = words[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if (c >= 'a' && c <= 'z')
				encr_word[i] = (((c - 'a') + 13) % 26) + 'a';
			else
				encr_word[i] = (((c - 'A') + 13) % 26) + 'A';
		}
		else
			encr_word[i] = c;
	}
	encr_word[i] = '\0';
	return (encr_word);
}
