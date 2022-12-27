#include<stdio.h>
int main(){
    int n,i,e=0,o=0,s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            e=e+ar[i];
        }
        else{
           o=o+ar[i];
        }
    }
    if(e>o){
        printf("%d",e-o);
    }
    else{
        printf("%d",o-e);
    }
}