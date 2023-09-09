#include<stdio.h>
int main()
{
    int a[3][3]={5,10,15,20,25,30,35,40,45};
    int b[3][3]={2,4,6,8,10,12,14,16,18};
    int c[3][3];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {         
            c[i][j]=a[i][j]+b[i][j];      //adding of matrices
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",c[i][j]);     //printing of the elements of the matrices
        }
        printf("\n");
    }
    return 0;
}