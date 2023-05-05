#include<stdio.h>
int main()
{ 
int n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 int a,c=0,i; 
scanf("%d",&a); 
for(i=0;i<a;i++)
 {
 int b; 
scanf("%d",&b); 
if(b%2!=0) 
{ 
c++; 
} 
} 
if(c%2!=0)
 { 
c--; 
} 
printf("%d
",c/2);
 }
}