#include<stdio.h>
int main(){
    int n,i,c,a=0,b=1,ct=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=a+b;
        if(c==n)
        {
            ct++;
            break;
        }
        a=b;
        b=c;
    }
    if(ct==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    
}