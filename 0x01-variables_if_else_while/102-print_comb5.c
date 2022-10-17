#include<stdio.h>
/**
 * main - beginning
 * Return: end
 */

int main(void)
{
	int firstnumber = o, secondnumber;

	while (firstnumber <= 99)
	{
		if (secondnumber != firstnumber)
		{
			putchar((firstnumber / 10) + 48);
			putchar((firstnumber % 10) + 48);
			putchar(' ');
			putchar((secondnumber / 10) + 48);
			putchar((secondnumber % 10) + 48);

			if (firstnumber != 98 || secondnumber != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++secondnumber;
	}
	++firstnumber;
}
putchar('\n');
return (0);
}
