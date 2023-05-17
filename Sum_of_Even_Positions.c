#include<stdio.h>
int abst(int m,int n)
{
    if(m>n)
    {
        return m-n;
        
    }
    else
    {
        return n-m;
    }
}
int main()
{
int n,i;
scanf("%d",&n);
int a[100];
for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    
}
int e=0;
for(i=0;i<n;i++)
{
    if(i%2==0)
    {
        e=e+a[i];
        
    }
    
}
printf("%d",e);
}