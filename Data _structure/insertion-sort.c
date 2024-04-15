#include<stdio.h>
int main()
{
    int array[7],i,j,item,n=7;
    
    printf("Enter the array:");
    for(i=0;i<7;i++)
    scanf("%d",&array[i]);
    insertion(array);
    
}
int insertion (int array[])
{
int i,j, item;

for(int i=0; i<7; i++) {
        item=array[i];
        j=i-1;
        while(j>=0 && array[j]>item) {
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=item;
    }for(i=0; i<7; i++)
        printf("%d ",array[i]);
    }
