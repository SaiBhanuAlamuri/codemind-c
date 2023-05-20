#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
     return 1;
}
int main()
{
    int n,m,i,c=0;
    scanf("%d%d",&n,&m);
    i=n;
    for(i;i<=m;i++)
    {
        if(prime(i)==1 && i!=1)
        {
            c=c+1;
        }
    }
    printf("%d",c);
    return 0;
}