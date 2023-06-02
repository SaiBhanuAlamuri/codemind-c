#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
   for(j=0;j<t;j++)
    {
        long long int i,n,m,f=0;
        scanf("%lld%lld",&n,&m);
        for(i=0;i<m;i++)
        {
            if((i*i)%m==n){
               printf("%lld
",i);
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("-1
");
        }
    }
}