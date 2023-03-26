#include<stdio.h>
int main()
{ 
int n,i,fact,r,s=0,t; 
scanf("%d",&n); 
t=n; 
while(n)
 {
 i=1;
 fact=1;
r=n%10; 
while(i<=r)
 { 
fact=fact*i;
 i++; 
}
 s=s+fact; 
n=n/10; 
} 
if(s==t) {
 printf("The number %d is a strong number",t);
 } 
else { 
printf("The number %d is not a strong number",t); 
}
}