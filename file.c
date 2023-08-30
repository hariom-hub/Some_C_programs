// C program to print the factorial of a number three times using function with no argument but return type
#include<stdio.h>
int printFactorial(); //function declaration
int main()
{  //function call
  printFactorial();
  printFactorial();
  printFactorial();       
}

 int printFactorial()        //function definition
{
    int n;
    long long factorial=1;
    printf("\n enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("\n Factorial of %d is : %ld",n,factorial);
    return factorial;
}