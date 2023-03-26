
#include<stdio.h>
int main()
{ 
int n,m,i;
 scanf("%d%d",&n,&m);
 for(i=0;i<m;i++)
 { 
int a,b;
 scanf("%d%d",&a,&b); 
if(a==b && n<=a && n<=b)
 { 
printf("ACCEPTED
");
 } 
else if(n>a || n>b)
 { 
printf("UPLOAD ANOTHER
");
 } 
else
 { 
printf("CROP IT
");
 }
 }
}