#include<stdio.h>
int prime(int n)
{
    int i,c=0,flag=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
            
        }
    }
    if(c==2)
    {
        flag=1;
        
    }
    else
    {
        flag=0;
    }
    return flag;
}
int main()
{
    int n,r=0,d=0,pc=0;
    scanf("%d",&n);
    int x=n;
    while(n!=0)
    {
        r=n%10;
        d=d+1;
        if(prime(r)==1)
        {
            pc=pc+1;
        }
        n=n/10;
        
        
        
    }
    if(prime(x)==1 && d==pc)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}