#include<stdio.h>
#include<math.h>
int main(){
    int n,i,k1=0,k2=0,a,b;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {   
        if(i%2==0)
        {
        a=pow(3,k1);
        printf("%d ",a+2);
        k1++;
    }
        else
        {
            b=pow(5,k2);
            printf("%d ",b-3);
            k2++;
        }
    }
    
    
}