#include<stdio.h>
void printTable(int n);

int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printTable(n);
    return 0;
}
void printTable(int n)
{
    for(int i=n;i<=n*10;i=i+n)
    {
        printf("\n%d",i);
    }
}
