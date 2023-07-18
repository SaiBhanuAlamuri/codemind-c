#include<stdio.h>
int main()
{
    int n,a[100],i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        
        for(j=0;j<n;j++)
        {
            if(j!=i && a[j]<a[i])
            {
               c=c+1;
            }
        }
        printf("%d ",c);
    }
    
}