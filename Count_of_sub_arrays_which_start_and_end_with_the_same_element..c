#include<stdio.h>
int main()
{ 
int n,i,j,c=0; 
scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 { 
scanf("%d",&a[i]);
 } 
for(i=0;i<n;i++)
 {
 for(j=i;j<n;j++)
 { 
if(a[i]==a[j])
 { 
c++; 
} 
}
 }
 printf("%d",c);
}
