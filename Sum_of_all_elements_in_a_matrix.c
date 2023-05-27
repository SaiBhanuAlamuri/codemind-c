#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int se=0,so=0;
    int ar[100][100];
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            se=se+ar[i][j];
            
        }
        
    }
    printf("%d",se);
}