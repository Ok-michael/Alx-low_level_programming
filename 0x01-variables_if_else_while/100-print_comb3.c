#include <stdio.h>

/**
 * main - this function uses a nexted loop
 * prints a new line after all the mingling it does
 * Return: return 0 if everything goes well
 */
int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
       	{
            putchar('0' + i);
            putchar('0' + j);
            if (i < 8 || j < 9)
	    {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}

