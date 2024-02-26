#include <stdio.h>
int main() {
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter the number of rows and colum: \n");
    scanf("%d %d", &r,&c);
    printf("\nEnter elements of 1st matrix:\n\n");
    for (i = 0; i < r; ++i) 
    {
        printf("Enter the value of %d no row:\n",i+1);
        for (j = 0; j < c; ++j) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix:\n\n");
    for (i = 0; i < r; ++i)
    {
        printf("Enter the value of %d no row:\n",i+1);
        for (j = 0; j < c; ++j) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    // adding two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
        {
            sum[i][j] = a[i][j] - b[i][j];
        }

    // printing the result
    printf("\nSum of two matrices: \n");
    for (i=0;i<r;++i)
    {
        for (j = 0; j < c; ++j) 
        {
            printf("%d   ", sum[i][j]);

        }
        printf("\n");
    }

    return 0;
}
