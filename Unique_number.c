#include<stdio.h>
int main()
{
    int n,temp,i,j,r,c=0,count=0;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        c++;
        temp=temp/10;
    }
    int ar[c];
    temp=n;
  for(i=0;i<c;i++)
  {
        r=temp%10;
        ar[i]=r;
        temp=temp/10;
  }
  for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=j)
            {
                if(ar[i]==ar[j])
                {
                    count++;
                    break;
                }
                
            }
        }
    }
    if(count>0)
    {
        printf("Not Unique Number
");
    }
    else
    {
        printf("Unique Number
");
    }
    
}