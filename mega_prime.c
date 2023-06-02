#include<stdio.h>
int prime(int n)
{
    int i,c=0,f=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        f=1;
    }
    return f;
}

int main()
{
    int n,r=0,d=0,p=0;
    scanf("%d",&n);
    int x=n;
    while(n!=0)
    {
        r=n%10;
        d=d+1;
        if(prime(r)==1)
        {
            p=p+1;
        }
        n=n/10;
    }
    if(p==d && prime(x)==1)
    {
        printf("Mega Prime");
    }
    else
    {
    	printf("Not Mega Prime");
    	
	}
    
}