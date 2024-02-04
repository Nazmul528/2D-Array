#include<stdio.h>
int main()
{

    int array [100],i,n,position,value;
    printf("how many array :");
    scanf("%d",&n);
    printf("Enter %d element :\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&array[i]);
    printf("Enter the insert element location :");
    scanf("%d",&position);
    printf("Enter the value to insert :");
    scanf("%d",&value);
    for(i=n-1; i>=position-1; i--)
        array[i+1]=array[i];
    array[position-1]=value;
    printf("outout array :\n");
    for(i=0; i<=n; i++)
        printf("%d\n",array[i]);

}
