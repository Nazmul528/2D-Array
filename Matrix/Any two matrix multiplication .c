#include<stdio.h>
int main() {
    int a[100][100], b[100][100], mul[100][100], r,c,c1, i, j, k;

    
    printf("Enter the elements of Matrix-A: \n");
    printf("Enter the row and column:");
    scanf("%d %d",&r ,&c);

    for (i = 0; i < r; i++) 
    {printf("Enter the value %d no row:",i+1);
    
        for (j = 0; j < c; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");
    printf("Enter the column:");
    scanf("%d",&c1);
    

    for (i = 0; i < c; i++) 
    {
        printf("Enter the value %d no row:",i+1);
        for (j = 0; j < c1; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c1; j++) {
            mul[i][j] = 0;
            for (k = 0; k < c; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("two matrices multiple: \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
