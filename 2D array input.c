#include<stdio.h>
int main()
{
    int i,j;
    int A[5][4];
    for(i=0; i<5; i++)
    {   printf("Enter tha value of %d no row:\n",i+1);
        for(j=0; j<4; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
