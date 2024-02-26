#include <stdio.h>
int main() 
{
    int arr1[100][100], i, j, n;
    float determinant = 0;
    printf("Input the size of the square matrix : ");
    scanf("%d", &n);
    printf("Input elements in the matrix :\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the value %d no row :",i+1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nSetting zero in upper triangular matrix\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++) {
            if (i >= j) {
                printf("% d", arr1[i][j]);
            } else {
                printf("% d", 0);
            }
        }
    }
    printf("\n\n");

    return 0;
}
