#include<stdio.h>
int main()
{ 
int n,i,max=0;
 scanf("%d",&n); 
int a[n]; 
for(i=0;i<n;i++) 
{
 scanf("%d",&a[i]);
 } 
int j;
 scanf("%d",&j);
 for(i=0;i<n;i++) 
{ 
if(a[i]>max) 
{ 
max=a[i];
 }
 } 
for(i=0;i<n;i++) 
{ 
if(a[i]+j>=max)
 { 
printf("True "); 
} 
else
 {
 printf("False "); 
} 
}
}