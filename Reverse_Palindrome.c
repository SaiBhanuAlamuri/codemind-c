
#include<stdio.h>
int f(int n)
{ 
int c=0,i=n;
 while(n)
 { 
c=(c*10)+n%10;
 n=n/10; 
}
 int r=0,a,d; 
a=i+c; d=a; 
while(a) 
{
 r=(r*10)+a%10;
 a=a/10; 
} 
if(d==r) 
{ 
return r;
 }
 else { 
f(d); 
}
}
int main()
{
 int e,p;
 scanf("%d",&e); 
p=f(e); 
printf("%d",p);
}
