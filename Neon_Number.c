#include<stdio.h>
int main(){
    int x,n,r;
    int p=0,s=0;
    scanf("%d",&x);//9
    n=x*x;//81
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
    }
    if(s==x){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
    
    
    
}