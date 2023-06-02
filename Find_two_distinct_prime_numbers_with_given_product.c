#include<stdio.h>
int prime(int n)
{
    int c=0,f=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        f=1;
    }
    return f;
}
int main()
{
    int n,i,j;
    int c=0,a=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j && prime(i)==1  && prime(j)==1 && i*j==n)
            {
                a=i;
                b=j;
                c=1;
                break;
            }
        }
        if(c==1)
        {
            break;
        }
    }
    if(c==1)
    {
        printf("%d %d",a,b);
    }
    else
    {
        printf("-1");
    }
}