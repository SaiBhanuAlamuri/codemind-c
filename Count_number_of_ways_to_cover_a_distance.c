#include<stdio.h>
int c(int n)
{ 
if(n<=0) 
{
 return 0; 
}
 else if(n==1)
 { 
return 1; 
} 
else if(n==2) 
{ 
return 2; 
} 
else if(n==3)
 {
 return 4; 
}
 return c(n-1)+c(n-2)+c(n-3);
}
int main()
{ 
int n; 
scanf("%d",&n);
 printf("%d",c(n));
}
