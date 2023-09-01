#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the main function prints the minimum number of coins
 * need to make change for an amount of money.
 * @argc: this is number of commandline arguments.
 * @argv: this is a pointer to an array of commmand line arguments.
 * Return: this function returns 0 if success and non-zero otherwise.
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int k, lstcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (k = 0; k < 5; k++)
		{
			if (money >= cents[k])
			{
				lstcents += money / cents[k];
				money = money % cents[k];
				if (money % cents[k] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lstcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
