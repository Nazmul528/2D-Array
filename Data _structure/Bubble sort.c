#include<stdio.h>
int main()
{
   int array[100],i,j,size;
   printf("Enter the array size :");
   scanf("%d",&size);
   printf("Enter the array :");
   for(i=0;i<size;i++)
   scanf("%d",&array[i]);
   for(i=0;i<size-1;i++)
   {
       for(j=0;j<size-1-i;j++)
       {
          if(array[j]>array[j+1])
          {
              int tamp=array[j];
                  array[j]=array[j+1];
                  array[j+1]=tamp;
          }
       }
   }
   printf("bubble sort array : ");
   for(i=0;i<size;i++)
   printf("%d ",array[i]);

}         
