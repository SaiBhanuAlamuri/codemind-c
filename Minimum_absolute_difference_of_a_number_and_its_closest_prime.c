#include<stdio.h>
int prime(int n)
{
    int c=0,flag=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    return flag;
}

int main()
{
    int n,f=0,l=0,df=0,dl=0,i;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        if(prime(i)==1)
        {
            f=i;
            break;
        }
    }
    for(i=n;i<=10000;i++)
    {
        if(prime(i)==1)
        {
            l=i;
            break;
        }
        
    }
    df=n-f;
    dl=l-n;
    if(df==dl)
    {
        printf("%d",dl);
    }
    else if(df>dl)
    {
        printf("%d",dl);
        
    }
    else
    {
        printf("%d",df);
    }
    
    
    
}