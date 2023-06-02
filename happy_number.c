#include<stdio.h>
#include<math.h>
int fun(int n)
{
    int r,s=0,f=0;
    while(1>0)
    {
        s=0;
        while(n!=0)
        {
            r=n%10;
            s=s+r*r;
            n=n/10;
        }
        if(s>9)
        {
            n=s;
            continue;
            
        }
        else
        {
            break;
        }
    }
    if(s==1 || s==7)
    {
        f=1;
    }
    return f;
}
int main()
{
    int n,res;
    scanf("%d",&n);
    res=fun(n);
    if(res==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}