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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,f=0,l=0,dl=0,df=0;
        scanf("%d",&n);
        for(i=n-1;i>=0;i--)
        {
            if(prime(i)==1)
            {
                f=i;
                break;
            }
        }
        for(i=n;i<=100000;i++)
        {
            if(prime(i)==1)
            {
                l=i;
                break;
            }
        }
        df=n-f;
        dl=l-n;
        if(df>dl)
        {
            printf("%d
",l);
        }
        else if(dl>df)
        {
            printf("%d
",f);
        }
        else
        {
            printf("%d
",f);
        }
        
    }
}