#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,4,1,6,2,8,3,3,10};
    int c[3][3],i,j,k;
    printf("OUTPUT IS : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          c[i][j]=0;
          for(k=0;k<3;k++)
          {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
          }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}