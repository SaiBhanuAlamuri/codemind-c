#include<stdio.h>
int main()
{ 
int n,m,h,a;
 scanf("%d%d",&n,&m); 
while(n!=m)
 { 
if(n>m) 
{
 n=n-m; 
} 
else {
 m=m-n; 
} 
}
 printf("%d",n);
}