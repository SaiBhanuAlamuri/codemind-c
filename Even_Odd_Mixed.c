#include<stdio.h>
int main()
{ 
int n,r=0,d=0,e=0,o=0; 
scanf("%d",&n); 
while(n!=0) 
{ 
r=n%10;
 d=d+1;
 if(r%2==0) 
{ 
e=e+1;
 }
 else 
{
 o=o+1;
 } 
n=n/10; 
}
 if(d==e)
 { 
printf("Even"); 
}
 else if(d==o)
 { 
printf("Odd");
 } 
else
 {
 printf("Mixed"); 
}
}