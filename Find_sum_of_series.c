
#include<stdio.h>
int main()
{
 int i,n; 
scanf("%d",&n); 
float s;
 for(i=1;i<=n;i++)
 {
 s=s+(1.0/i); 
}
 printf("%0.2f",s); 
}