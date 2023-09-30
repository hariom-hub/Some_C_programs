#include<stdio.h>
int printFact(int n,long factorial);
int main()
{
    long factorial=1;
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printFact(n,factorial);
    return 0;
}
int printFact(int n,long factorial)
{
    int i;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("factorial of %d is %d",n,factorial);
}