#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int  arra[10][10];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <=n; j++)
        {
            arra[i][j] = (1 + i) * (1 + j);
            printf("\t %d x %d = %d", 1 + i, 1 + j, arra[i][j]);
        }
         printf("\n");
    }
    return 0;
}