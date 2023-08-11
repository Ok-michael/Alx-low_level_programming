#include <stdio.h>
/**
 * main - this program declares anitializes two variable
 * of type int
 * uses the for some mingling
 * Return: return an integer vlue 0 when everything goes well
 */
int main(void)
{
	int num1, num2;
	
	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (numq != num2)
			{
				putchar('0' + num1 / 10);
				putchar('0' + num1 % 10);
				putchar(' ');
				putchar('0' + num2 / 10);
				putchar('0' + num2 % 10);
				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	put('\n');
	return (0);
}
