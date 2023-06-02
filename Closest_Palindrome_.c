#include<stdio.h>
int pal(int n)
{
    int x=n;
    int r=0,rev=0,f=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if (x==rev)
    {
        f=1;
    }
    return f;
}
int main()
{
    int n,i;
    int f=0,l=0,df=0,dl=0;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        if(pal(i)==1)
        {
            f=i;
            break;
        }
        
    }
    for(i=n+1;i<=10000;i++)
    {
        if(pal(i)==1)
        {
            l=i;
            break;
        }
    }
    df=n-f;
    dl=l-n;
    if(df>dl)
    {
        printf("%d",l);
    }
    else if(df==dl)
    {
        printf("%d %d",f,l);
    }
    else
    {
        printf("%d",f);
    }
    
}