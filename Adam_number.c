#include<stdio.h>
int main(){
    int n,r=0,rev=0,rd=0,re=0;
    scanf("%d",&n);
    int s=n*n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    int y=rev*rev;
    while(y!=0){
        rd=y%10;
        re=re*10+rd;
        y=y/10;
    }
    if(re==s){
        printf("True");
    }
    else{
        printf("False");
    }
}