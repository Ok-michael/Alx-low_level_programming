#include "main.h"
#include <stdlib.h>

/**
 * rot13 - this function take encripts a string using
 * rot13
 * @input: this function takes a string as input
 * Return: this function returns the encripted 
 * string
 */
char *rot13(char *input)
{
	char *encr_input = (char *)malloc(strlen(input) + 1);
    	int i;

	if (input == NULL)
        	return NULL;
    	if (output == NULL)
        	return NULL;
    	for (i = 0; input[i] != '\0'; i++) 
	{
        	char c = input[i];
        	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
            		if (c >= 'a' && c <= 'z') 
			{
                		encr_input[i] = (((c - 'a') + 13) % 26) + 'a';
            		}
			else
			{
                	encr_input[i] = (((c - 'A') + 13) % 26) + 'A';
            		}
        	}
		else
		{
            		encr_input[i] = c;
        	}
    	}

    	encri_input[i] = '\0';
    	return (encri_input;
}
