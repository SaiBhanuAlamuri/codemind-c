#include<stdio.h>
int main()
{
    int n,i,j,ar[100],max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if((ar[i]+k)>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
    
}