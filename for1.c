#include <stdio.h> 
int main()
{
	int i, j, k;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 10 - i; j++)
		{
			putchar(' ');
		}
		for (k = 0; k <= 2 * i; k++)
		{
			putchar('@');
		}
		puts("");
	}
	return 0;
}
