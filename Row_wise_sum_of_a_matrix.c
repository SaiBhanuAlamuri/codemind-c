#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int r=0,max2=0;
    
    
    for(int i=0;i<n;i++)
    {
        r=0;
        for(int j=0;j<m;j++)
        {
            r=r+a[i][j];
        }
        printf("%d ",r);
       
    }
    
    
}