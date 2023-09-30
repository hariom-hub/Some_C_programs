#include<stdio.h>

int printSum(int n);
int main()
{
    printf("Sum is : %d",printSum(10));
    return 0;
}

int printSum(int n)
{
    if(n==1){
        return 1;
    }
    else{
        int SumofN=printSum(n-1);
        int t_sum=SumofN+n;
        return t_sum;
    }
}