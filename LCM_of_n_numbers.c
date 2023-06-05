#include<stdio.h>
long int lcm(long int a,long int b)
{
    long int max=a;
    if(a<b)
    {
        max=b;
    }
    long int l=max;
    while(1)
    {
        if(l%a==0 && l%b==0)
        {
            return l;
        }
        else
        {
            l=l+max;
        }
        
    }
}
int main()
{
   int  n,arr[100];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    long  int l=lcm(arr[0],arr[1]);
    for(i=2;i<n;i++)
    {
        l=lcm(l,arr[i]);
    }
    printf("%ld",l);
    
}