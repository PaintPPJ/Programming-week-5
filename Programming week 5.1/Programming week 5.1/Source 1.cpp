#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int i, j, k, num;
    
    scanf("%d",&num);
    if (num >= 1) {
        for (i = -num; i <= num; i++)
        {
            k = i;
            if (k < 0)
            {
                k = -k;
            }
            for (j = 0; j <= num; ++j)
            {
                if (j < k)
                {
                    printf("  ");
                }
                else
                {
                    printf(" * ");
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