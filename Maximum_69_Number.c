#include<stdio.h>
int main()
{
    int n,r=0,s=0,x=0,d=0,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        s=n%10;
        r=r*10+s;
        n=n/10;
    }
    while(r!=0)
    {
        x=r%10;
        r=r/10;
        if(d<1)
        {
            if(x==6)
            {
                x=9;
                d=1;
            }
        }
        rev=rev*10+x;
        
        
    }
    printf("%d",rev);
}