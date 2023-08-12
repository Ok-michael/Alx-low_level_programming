#include <stdio.h>

/**
 * main - this program declares three integers p,q,r
 * and uses it in some beautiful ways to create some number combinations
 * It uses three nexted loops to achieve this
 * Return: main returns 0 when everything goes well
 */
int main(void)
{
	int p, q, r;

	for (p = '0'; p < '9'; p++)
	{
		for (q = p + 1; q <= '9'; q++)
		{
			for (r = q + 1; r <= '9'; r++)
			{
				if ((q != p) != r)
				{
					putchar(p);
					putchar(q);
					putchar(r);
					if (p == '7' && q == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
