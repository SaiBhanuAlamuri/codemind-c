#include<stdio.h>
int main(){
    int n,fs,ls,r=0,rev=0;
    scanf("%d",&n);
    fs=n/1000;
    ls=n%1000;
    while(ls!=0){
        r=ls%10;
        rev=rev*10+r;
        ls=ls/10;
    }
    printf("%d",fs*1000+rev);
}