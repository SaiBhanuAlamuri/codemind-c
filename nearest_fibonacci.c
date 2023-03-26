#include<stdio.h>
int main()
{ 
int n,a=0,b=1,c,t;
 scanf("%d",&n);
 c=a+b; 
t=n; 
while(c<=t)
 {
 c=a+b; 
a=b;
 b=c; 
}
 if(n-a>b-n) 
{ 
printf("%d",b);
 } 
else if(n-a<b-n)
 { 
printf("%d",a);
 } 
else { 
printf("%d %d",a,b);
 } 
}