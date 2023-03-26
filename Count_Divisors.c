
#include<stdio.h>
int main()
{ 
int a,b,c,i; 
scanf("%d%d%d",&a,&b,&c);
 int d=0;
 for(i=a;i<=b;i++) 
{ 
if(i%c==0)
 { 
d++; 
}
 }
 printf("%d",d);
}