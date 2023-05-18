#include<stdio.h>
int prime(int n)
{
    int c=0,i,flag=0;
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
    int n,i,c=0;
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