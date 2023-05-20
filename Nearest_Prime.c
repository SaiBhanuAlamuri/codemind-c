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
    int t,i,f,l,df,dl;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(i=n-1;i>=0;i--)
        {
            if(prime(i)==1)
            {
                f=i;
                break;
            }
        }
        for(i=n;i<=1000;i++)
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
            printf("%d",l);
        }
        else if(dl>df)
        {
            printf("%d",f);
        }
        else
        {
            if(l>f)
            {
                printf("%d",f);
            }
            else
            {
                printf("%d",l);
            }
        }
        printf("
");
    }
    
}