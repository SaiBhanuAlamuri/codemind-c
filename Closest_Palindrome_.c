#include<stdio.h>
int reve(int n)
{
    int r=0;
    int rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int a,i,f,l,df,dl;
    scanf("%d",&a);
    for(i=a-1;i>0;i--)
    {
        if(reve(i)==i)
        {
            f=i;
            break;
        }
    }
    for(i=a+1;i<=10000;i++)
    {
        if(reve(i)==i)
        {
            l=i;
            break;
        }
    }
    df=a-f;
    dl=l-a;
    if(df==dl)
    {
        printf("%d %d",f,l);
    }
    else if(df>dl)
    {
        printf("%d",l);
    }
    else
    {
        printf("%d",f);
        
    }
    return 0;
    
}