#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i,j, k, n;
		scanf("%d",&n);
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j % 26 != 0) 
				{
					printf("%c ", (j % 26) + 64);
				}
				else
				{
					printf("%c ", 90);
				}
			}
			for (k = i - 1; k >= 1; k--)
			{
				if (k % 26 != 0)
				{
					printf("%c ", (k % 26) + 64);
				}
				else
				{
					printf("%c ", 90);
				}
			}
			printf("\n");
		}
		return 0;
}