#include<stdio.h>
int main()
{ 
int i,a,b,c;
 scanf("%d%d",&a,&b);
 for(i=1;i<=b;i++) 
{
 c=i*a;
 if(c%b==0)
 { 
printf("%d",c);
 break; 
}
 }
}
