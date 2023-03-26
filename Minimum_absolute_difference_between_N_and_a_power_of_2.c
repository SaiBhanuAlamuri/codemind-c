
#include<stdio.h>
int main()
{ 
int n,a=2,b=2;
 scanf("%d",&n);
 while(a*2<=n) 
{
 a=a*2;
 }
 while(b<=n)
 { 
b=b*2; 
}
 if(n-a<b-n)
 { 
printf("%d",n-a); 
}
 else 
{ 
printf("%d",b-n); 
}
}