#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            m=arr[i];
        }
    }
    printf("%d",m);
}