#include <stdio.h>

void printFactorial(int num);

int main()
{
    printFactorial(10); // Calling the function with a constant argument
    printFactorial(12);
    printFactorial(5);
    return 0;
}

void printFactorial(int num)
{
    long long factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is: %lld\n", num, factorial);
}
