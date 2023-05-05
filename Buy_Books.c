#include<stdio.h>
int main()
{ 
int n,i;
 scanf("%d",&n);
 int a[n],b[n]; 
int c=0,d=0,p; 
for(i=0;i<n;i++)
 { 
scanf("%d",&a[i]);
 } 
for(i=0;i<n;i++)
 { 
scanf("%d",&b[i]); 
} 
for(i=0;i<n;i++)
 {
 c=c+a[i]; 
d=d+b[i];
 }
 p=d-c; 
if(p<0) 
{ 
printf("0");
 } 
else {
 printf("%d",p); 
}
}

