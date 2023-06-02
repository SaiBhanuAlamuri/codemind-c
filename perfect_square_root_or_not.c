#include<stdio.h>
int main()
{
    int n,m,c=0,i;
    scanf("%d",&n);
    m=n/2;
    for(i=1;i<=m;i++)
    {
        if(i*i==n)
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    
}