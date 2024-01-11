
#include<stdio.h>
int printFact(int n);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Factorial of %d is : %d",num,printFact(num));         //calling printFact and then printing the factorial
}

int printFact(int n){

    if(n==1){
        return 1;        //when n becomes 1 program will be exitted
    }
    int factorial = n*printFact(n-1);     //recursive call 
    return factorial;
}
