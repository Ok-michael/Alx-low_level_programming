#include <stdio.h>

/**
 * main - this function uses a nexted loop
 * prints a new line after all the mingling it does
 * Return: return 0 if everything goes well
 */
int main()
{
    for (int m = 0; m < 10; m++)
    {
        for (int n = m + 1; n < 10; n++)
       	{
            putchar('0' + m);
            putchar('0' + n);
            if (m < 8 || n < 9)
	    {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}

