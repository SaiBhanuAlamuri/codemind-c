#include<stdio.h>
int divi(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    return c;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(divi(i)==9)
        {
            c=c+1;
            printf("%d ",i);
        }
        
    }
    printf("
");
    printf("Total=%d
",c);
}