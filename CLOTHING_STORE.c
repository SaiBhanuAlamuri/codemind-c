#include<stdio.h>
int main()
{
    int n,i,j,p=0;
    scanf("%d",&n);
    int ar[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j && ar[i]==ar[j] && ar[i]!=-1)
            {
                ar[i]=-1;
                ar[j]=-1;
                p=p+1;
            }
        }
    }
    printf("%d",p);
}