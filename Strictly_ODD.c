
#include<stdio.h>
int main()
{ 
int a=0,b=0,c=0,d=0,n,i;
 scanf("%d",&n); 
int ar[n]; 
for(i=0;i<=n;i++) 
{ 
scanf("%d",&ar[i]);
 } 
for(i=0;i<n;i++) 
{ 
if(ar[i]%2==1)
 { 
a++;
 if(i%2==1)
 {
 b++; 
} 
}
 }
 if(a==b) 
{
 printf("True"); 
} 
else {
 printf("False");
 }
}