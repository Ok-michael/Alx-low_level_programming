#include "main.h"
#include <stdlib.h>

/**
 * count_d_words - this function counts the number of words in a text
 * @txt: this is passed as a parameter into the function
 * Return: this function returns an integer representative of
 * the number of words contained in the text.
 */
int count_d_words(char *txt)
{
	int k, cntr = 0;

	for (k = 0; txt[k]; k++)
	{
		if (txt[k] == ' ')
		{
			if (txt[k + 1] != ' ' && txt[k + 1] != '\0')
				cntr++;
		}
		else if (k == 0)
			cntr++;
	}
	cntr++;
	return (cntr);
}

/**
 * strtow - this function splits a string into individual words
 * @str: this is the string passed in as argument
 * Return: this function returns a pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count_d_words(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
