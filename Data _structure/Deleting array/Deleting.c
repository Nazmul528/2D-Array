#include<stdio.h>
int main()
{

    int array [100],i,n,position,value;
    printf("how many array :");
    scanf("%d",&n);
    printf("Enter %d element :\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&array[i]);
    printf("Enter the deleting element location :");
    scanf("%d",&position);
    for(i=position-1; i<n; i++)
        array[i]=array[i+1];
    printf("outout array :\n");
    for(i=0; i<=n-2; i++)
        printf("%d\n",array[i]);

}
