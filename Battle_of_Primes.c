#include<stdio.h>
int main()
{ 
int a,b,c,ct=0,i,j,k;
 scanf("%d%d",&a,&b);
 for(i=1;i>0;i++)
 { 
k=a+b+i; ct=0;
 for(j=1;j<=k;j++)
 { 
if(k%j==0)
 { 
ct=ct+1;
 }
 } 
if(ct<=2)
 { 
printf("%d",i);
 break; 
} 
}
}