#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
        printf("*");
    else
    {
        int p = n - 2;
        int c = 0, b = 0;
        for (int i = n - 1; i > 0; i--)
        {
            for (int s = 0; s < b; s++)
                printf(" ");
            for (int j = 0; j < 3; j++)
            {
                if (!c)
                {
                    printf("X");

                    for (int k = p; k > 0; k--)
                    {
                        printf(" ");
                    }
                }
                if (c)
                {
                    printf("O");

                    for (int k = p; k > 0; k--)
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
            c = !c;
            p--;
            b++;
        }
        for (int i = 0; i < 2 * n - 1; i++)
            printf("*");
        printf("\n");
        p = 0;
        b--;
        for (int i = n - 1; i > 0; i--)
        {
            for (int s = 0; s < b; s++)
                printf(" ");
            for (int j = 0; j < 3; j++)
            {
                if (!c)
                {
                    printf("X");

                    for (int k = p; k > 0; k--)
                    {
                        printf(" ");
                    }
                }
                if (c)
                {
                    printf("O");

                    for (int k = p; k > 0; k--)
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
            c = !c;
            p++;
            b--;
        }
    }
}