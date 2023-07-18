#include<stdio.h>
int main()
{
    int n,ar[100],i,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]==0 || ar[i]==1)
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}