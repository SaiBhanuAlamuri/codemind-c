#include<stdio.h>
int fact(int n){
    int i,fact=1;
   for(i=n;i>0;i--)
   {
       fact=fact*i;
   }
   return fact;
    
}
int main()
{
    int n,s=0,r=0;
    scanf("%d",&n);
    int x=n;
    while(n!=0)
    {
        r=n%10;
        s=s+fact(r);
        n=n/10;
    }
    if(s==x)
    {
        printf("The number %d is a strong number",x);
    }
    else
    {
        printf("The number %d is not a strong number",x);
        
    }
}