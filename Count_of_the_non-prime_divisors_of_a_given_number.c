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
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(prime(i)==0)
            {
                c=c+1;
            }
        }
    }
    printf("%d",c);
}