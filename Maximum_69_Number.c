#include<stdio.h>
int main()
{
    int n,r,rev=0,d=0,c=0,b=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    while(rev!=0)
    {
        b=rev%10;
        if(d<1)
        {
            if(b==6)
            {
                b=9;
                d=1;
            }
        }
        c=c*10+b;
        rev=rev/10;
    }
    printf("%d",c);
    
}