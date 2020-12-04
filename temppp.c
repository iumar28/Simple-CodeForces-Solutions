#include <stdio.h>
void main ()
{

    static int array[10][10];
    int i, j, m, n, a = 0, sum = 0;

    scanf("%d %d", &m, &n);

    if (m == n )
    {

        //printf("Enter the co-efficients of the matrix\n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%d", &array[i][j]);
            }
        }


        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf(" %d", array[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < m; ++i)
        {
            sum = sum + array[i][i];
        }

        printf("Sum of the diagonal elements is=%d",sum);

    }


}