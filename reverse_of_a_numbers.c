#include<stdio.h>
int main(){
    int a,i,r=0,rev=0;
    scanf("%d",&a);
    while(a!=0){
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    printf("%d",rev);
}