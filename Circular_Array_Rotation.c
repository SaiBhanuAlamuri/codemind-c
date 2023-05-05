#include<stdio.h>
int main()
{ 
int m,n,j,i,w,v;
 scanf("%d%d%d",&m,&n,&w);
 int a[m];
 for(j=0;j<m;j++) 
{ 
scanf("%d",&a[j]);
 }
 for(i=0;i<n;i++)
 { 
int p=a[m-1]; 
for(j=m-1;j>0;j--)
 { 
a[j]=a[j-1]; 
} 
a[0]=p;
 }
 for(j=0;j<w;j++) 
{ 
scanf("%d",&v);
 printf("%d
",a[v]);
 } 
}