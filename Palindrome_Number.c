#include<stdio.h>
int pal(int n)
{
    int r=0,rev=0,x,f=0;
    x=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }
    if(x==rev)
    {
        f=1;
        
    }
    return f;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m,res;
        scanf("%d",&m);
        res=pal(m);
        if(res==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        
        
    }
    
}