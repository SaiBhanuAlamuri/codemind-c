#include<stdio.h>
#include<math.h>
int pa(int n,int x)
{
    int p,i;
    p=n;
    for(i=1;i<x;i++)
    {
        p=p*n;
    }
    return p;
}
int count(int n)
{
    int r=0,d=0;
    while(n!=0)
    {
        r=n%10;
        d=d+1;
        n=n/10;
    }
    return d;
}
int main()
{
    int n,s=0,dc=0,r=0;
    scanf("%d",&n);
    int x=n;
    dc=count(n);
    
    while(n!=0)
    {
        r=n%10;
        s=s+pa(r,dc);
        dc=dc-1;
        n=n/10;
        
    }
    
    if(s==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

   
