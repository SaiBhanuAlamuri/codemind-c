#include<stdio.h>
int count(int n)
{
    int r,d=0;
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
    int n,i,d,c=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=count(a[i]);
        if(d%2==0)
        {
            c=c+1;
        }
        
    }
    printf("%d",c);
    
}