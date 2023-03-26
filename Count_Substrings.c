
#include<stdio.h>
int main()
{
int m,n;
scanf("%d",&n);
for(m=0;m<n;m++)
{ 
int a,i,j,c=0; 
scanf("%d",&a); 
char str[a]; 
scanf("%s",str); 
for(i=0;i<a;i++) 
{
 for(j=i;j<a;j++)
 { 
 
if(str[i]=='1' && str[j]=='1') 
{ 
c++;
 } 
} 
}
 printf("%d
",c);
}
 }