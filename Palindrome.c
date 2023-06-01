#include<stdio.h>
int main()
{
    int n,r=0,rev=0,x;
    scanf("%d",&n);
    x=n;
    
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }
    if(x==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}