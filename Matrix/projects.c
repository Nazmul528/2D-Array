#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[7][7],i,j,r,c,max,min;
    double sum=0,avarage;
    while(1) {
        printf("Enter the row and colaum :\n");
        scanf("%d %d",&r,&c);
        for(i=0; i<r; i++)
        {
            printf("Enter the %d no. row :\n",i+1);
            for(j=0; j<c; j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }
        printf("the matics\n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                sum=sum+mat[i][j];
            }

        }
        printf("all matics sum :%.2lf\n",sum);
        avarage=sum/(r*c);
        printf("the avarage :%.2lf\n",avarage);
        min=mat[0][0];
        max=mat[0][0];
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(mat[i][j]<min)
                    min=mat[i][j];
            }

        }
        printf("The minimam value :%d\n",min);
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(mat[i][j]>max)
                    max=mat[i][j];
            }

        }
        printf("The maximam value :%d\n",max);
        printf("the minimam and maximam value maltipul :%d\n\n\n",max*min);

    }
    getch();
}
