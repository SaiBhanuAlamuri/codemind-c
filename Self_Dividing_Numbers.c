#include<stdio.h>
int self(int n)
{
    int x=n,d=0,r=0,c=0,f=0;
    while(n!=0)
    {
        r=n%10;
        d=d+1;
        if(r!=0 && x%r==0)
        {
            c=c+1;
            
        }
        n=n/10;
        
    }
    if(d==c)
    {
        f=1;
    }
    return f;
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(self(i)==1)
        {
            printf("%d ",i);
        }
    }
    
}