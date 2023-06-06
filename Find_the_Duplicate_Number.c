#include<stdio.h>
int main()
{
    int n,i,j,c,k;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        k=a[i];
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
        if(c==2)
        {
            printf("%d",a[i]);
            break;
        }
    }
}