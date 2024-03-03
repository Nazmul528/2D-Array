#include<stdio.h>
int main()
{
    int array[100],lb=1,ub,i,item,size,mid;
    printf("Enter the sizd of array:");
    scanf("%d",&size);
    ub=size;
    printf("Enter the array :");
    for(i=0; i<size; i++)
        scanf("%d",&array[i]);
    printf("Enter the item :");
    scanf("%d",&item);
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(array[mid]==item) {
            printf("item found at index :%d\n",mid);
            return 10;
        }
        else if (array[mid]<item)
            lb=mid+1;
        else
            ub=mid-1;
    }
    printf("item is not found");
    return 0;

}



