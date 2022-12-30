#include<stdio.h>
#include<math.h>
int main(){
    int n,fs,ld,l,c,s;
    scanf("%d",&n);
    l=log10(n)+1;
    ld=n%10;
    fs=n/pow(10,(l-1));
    c=n-(fs*pow(10,l-1)+ld);
    s=ld*pow(10,l-1)+fs+c;
    printf("%d",s);
}