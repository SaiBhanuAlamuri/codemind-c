#include<stdio.h>
int main()
{ 
int i,n,a=0,b=1,c,ct=0; 
scanf("%d",&n); 
for(i=0;i<=n;i++) 
{ 
c=a+b;
 if(c==n) 
{ 
ct++; 
break; 
} 
a=b; b=c;
 } 
if(ct==0) 
{ 
printf("False");
 }
 else
 {
 printf("True");
 }
}
