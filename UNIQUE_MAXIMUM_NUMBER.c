#include<stdio.h>
int main()
{
    int n,i,j,c=0,max=0,flag;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=1;
        for(j=0;j<n;j++)
        {
        
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                   flag=0;
                   break;
                    
                }
                
            }
        }
    
            if(flag==1)
            {
               if(max<a[i])
               {
                   max=a[i];
                   c=1;
               }
            }
        }
    
   
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}