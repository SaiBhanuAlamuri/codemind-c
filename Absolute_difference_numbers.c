#include<stdio.h>
#include<math.h>
int fun(int n)
{
    int r,d;
    r=d=0;
    while(n!=0)
    {
        r=n%10;
        d=d+1;
        n=n/10;
    }
    return d;
}
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
int main()
{
    int n,x,f=0,l=0,fd=0,ld=0,z=0;
    scanf("%d%d",&n,&x);
    z=fun(n);
    f=pa(10,z-x);
    l=pa(10,x);
    fd=n/f;
    ld=n%l;
    if (fd>ld)
    {
    	printf("%d",fd-ld);
	}
	else
	{
		printf("%d",ld-fd);
	}
}