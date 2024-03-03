#include<stdio.h>
int main ()
{
    int array[100],i,size,item,loc=0;
    printf("Enter the array size :");
    scanf("%d",&size);
    printf("Enter the array :");
    for(i=0; i<size; i++)
        scanf("%d",&array[i]);
    printf("Found the item :");
    scanf("%d",&item);
    for(i=0; i<size; i++)
    {
        if(array[i]==item)
           loc=i;
        
    }

    if(loc==0) 
        printf("item is not found");
    
    else
        printf("item is found\nposition;%d",loc+1);

}
