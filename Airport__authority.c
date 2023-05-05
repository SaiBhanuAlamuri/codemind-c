#include<stdio.h>
int main()
{ 
int n,i,a=0,b=0,tc; 
scanf("%d",&n); 
int ar[n]; 
for(i=0;i<n;i++)
 { 
scanf("%d",&ar[i]);
 } 
int c;
 scanf("%d",&c);
 for(i=0;i<n;i++) 
{
 if(ar[i]>c)
 {
 a=a+2; 
}
 else
 {
 b=b+1; 
}
 tc=b+a;
 } 
printf("%d",tc);
}
