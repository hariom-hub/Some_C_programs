#include<stdio.h>
int printFact(int n);
int main()
{
    printf("factorial is : %ld",printFact(5));
    return 0;
}
int printFact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else{
        long factNum,fact;
        factNum=printFact(n-1);
        fact=factNum*n;
        return fact;
    }
}