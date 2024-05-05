#include<stdio.h>
int main()
{
    int x=6;
    int y=48;
    int *p;
    p=&x;
    printf("%d\n",&x);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d",&p);
}
