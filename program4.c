//C program to print the ASCII values of alphabets
#include<stdio.h>
int main()
{
    int i;
    char ch;
    printf("\n ASCII values from 'a' to 'z'respectively are: \n");
    for(i='a';i<='z';i++)
    {
        printf("%d\n",i);
    }
    printf("\n ASCII values from 'A' to 'Z' respectively are : \n");
    for(i='A';i<='Z';i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
