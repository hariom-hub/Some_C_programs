//C program to check the number of vowels and consonants in a String
#include<stdio.h>
int  main()
{
    char str[30];
    int vow=0,cons=0,i=0;
    printf("Enter a string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||
        str[i]=='u'||str[i]=='U')
        {
        vow++;
        }
        else{
        cons++;
        }
        i++;
    }
    printf("\n Number of Vowels =%d",vow);
    printf("\n Number of Consonants = %d",cons);
    return 0;
}
