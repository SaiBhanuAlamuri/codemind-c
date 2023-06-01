#include<stdio.h>
int fun(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else if(n==3)
    {
        return 4;
    }
    else
    {
        return fun(n-1)+fun(n-2)+fun(n-3);
    }
}
int main()
{
    int n,res;
    scanf("%d",&n);
    res=fun(n);
    printf("%d",res);
}