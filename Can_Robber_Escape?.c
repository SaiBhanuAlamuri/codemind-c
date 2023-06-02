#include<stdio.h>
int main()
{
    int n,f=0,i;
    scanf("%d",&n);
    int ar[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]<n)
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
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
