#include<stdio.h>
int main(){
    int a,b,c,r;
    scanf("%d%d%d",&a,&b,&c);
    if(a%(b*c)==0){
        r=a/(b*c);
        printf("%d",r);
    }
    else{
        r=a/(b*c)+1;
        printf("%d",r);
    }
}