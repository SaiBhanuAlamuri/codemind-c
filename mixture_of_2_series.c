#include<stdio.h>
int main(){
    int n,i,k1=0,k2=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            printf("%d ",k1);
            k1=k1+2;
        }
        else{
            printf("%d ",k2);
            k2=k2+1;
        }
    }
}