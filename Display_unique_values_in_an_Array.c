#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j] && a[i]!=-1)
                {
                    a[i]=-1;
                    a[j]=-1;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            printf("%d ",a[i]);
            c=1;
            
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}