#include<stdio.h>
int sum(int x,int y);

int main()
{
    int x,y;
    printf("enter a number : ");
    scanf("%d",&x);
    printf("enter another number : ");
    scanf("%d",&y);
    int result=sum(x,y);
    printf("\nsum is : %d",result);
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}
