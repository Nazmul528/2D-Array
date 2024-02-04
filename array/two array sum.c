#include<stdio.h>
int main()
{

    int array[7],output[6],n;
    printf("how many array :");
    scanf("%d",&n);
    printf("Enter the number :");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        output[i]=array[i]+array[i+1];
        printf("output array :%d\n",output[i]);
    }


}
