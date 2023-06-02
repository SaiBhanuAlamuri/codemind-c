#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ma=a[0];
    int j=1;
    while(j<n)
    {
        if(a[j]%ma==0)
        {
            j=j+1;
        }
        else
        {
            ma=a[j]%ma;
        }
        
    }
    printf("%d",ma);

}