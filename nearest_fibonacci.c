#include<stdio.h>
int main()
{
    int n,i,fa,fb,fn,df=0,dl=0;
    scanf("%d",&n);
    int ar[1000];
    fa=0;
    fb=1;
    for(i=0;i<100;i++)
    {
        ar[i]=fa;
        fn=fa+fb;
        fa=fb;
        fb=fn;
    }
    for(i=0;i<100;i++)
    {
        if(n<ar[i])
        {
            df=n-ar[i-1];
            dl=ar[i]-n;
            if(df>dl)
            {
                printf("%d",ar[i]);
                break;
            }
            else if(df==dl)
            {
                printf("%d %d",ar[i-1],ar[i]);
                break;
            }
            else
            {
                printf("%d",ar[i-1]);
                break;
            }
        }
    }
    
    
}
