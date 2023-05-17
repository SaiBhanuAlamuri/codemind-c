#include<stdio.h>
int max(int n)
{
    int r=0,m=0;
    while(n!=0)
    {
        r=n%10;
        if(r>m)
        {
            m=r;
        }
        n=n/10;
    }
    return m;
}
int main()
{
    int n,res;
    scanf("%d",&n);
    res=max(n);
    printf("%d",res);
}