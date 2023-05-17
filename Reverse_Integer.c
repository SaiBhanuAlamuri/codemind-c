#include<stdio.h>
int main()
{
    int n,r=0,rev=0,flag=0;
    scanf("%d",&n);
    if(n<0)
    {
        flag=1;
        n=n*(-1);
    }
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }
    if(flag==1)
    {
        printf("%d",rev*-1);
    }
    else
    {
        printf("%d",rev);
    }
}