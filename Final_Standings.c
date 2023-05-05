#include<stdio.h>
int main()
{ 
int n,d,i; 
scanf("%d%d",&n,&d); 
int a[n];
 for(i=0;i<=n+1;i++)
 { 
a[i]=0; 
}
 a[0]=1;
 a[1]=d-1; 
for(i=2;i<n+1;i++) 
{
 a[i]=(d-1)*(a[i-1]+a[i-2]);
 } 
printf("%d ",a[n]);
}
