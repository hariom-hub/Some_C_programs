#include<stdio.h>
int printSum(int n);


int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("sum is : %d",printSum(n));
}

int printSum(int n){

    if(n==1){
        return 1;
    } 
        int totalSum = n+printSum(n-1);
        return totalSum;

    }
