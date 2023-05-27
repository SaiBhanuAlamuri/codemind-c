#include<stdio.h>
int main()
{
    int n,i,j,d;
    scanf("%d",&n);
    int mat1[n][n],mat2[n][n],dif[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           d=mat1[i][j]-mat2[i][j];
           if(d<0)
           {
           d=d*-1;
           }
           dif[i][j]=d;
           
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",dif[i][j]);
            if(j<n-1)
            {
                printf(" ");
            }
            
        }
        printf("
");
    }
}