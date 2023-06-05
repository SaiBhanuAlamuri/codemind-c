#include<stdio.h>
int main()
{
    int n,i,hcf,j;
    scanf("%d",&n);
    int ar[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    hcf=ar[0];
    j=1;
    while(j<n)
    {
        if(ar[j]%hcf==0)
        {
            j++;
        }
        else
        {
            hcf=ar[j]%hcf;
            
        }
    }
    printf("%d",hcf);
    
}