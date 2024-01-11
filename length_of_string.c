#include<stdio.h>

int strLength(char name[]);
int main()
{
    char name[100];
    printf("Enter your name : \n");
    gets(name);
    strLength(name);

}
int strLength(char name[]){

    int count = 0;
    printf("The name is : ");
    for(int i=0;name[i] != '\0';i++){
        printf("%c",name[i]);
        count++;
    }
    printf("\nThe length of your name is : %d",count);
}
