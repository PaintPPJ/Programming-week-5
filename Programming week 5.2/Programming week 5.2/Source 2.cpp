#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, n;
	scanf("%d",&n);
	if (n >= 1) {
		for (i = 0; i < n; i++)
		{
			for (j = 65; j < 64 + (2 * n); j++)
			{
				if (j >= (64 + n) + i)
				{
					printf("%c ", (((((64 + n) - (j % (64 + n)))) - 65) % 26) + 65);
				}
				else if (j <= (64 + n) - i)
				{
					printf("%c ", ((j - 65) % 26) + 65);
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("Error");
	}
	return 0;
}
