#include<stdio.h>
int main()
{ 
int n,i,j;
 scanf("%d",&n); 
int a[n]; 
for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++) 
{
 int c=0; 
for(j=i+1;j<n;j++) 
{ 
if(a[j]>a[i])
 { 
c++; 
break;
 }
 else
 { 
c+=1; 
if(j==n-1 && c>0)
 { 
c=0; 
break; 
}
 }
 }
 printf("%d ",c); 
}
}

