#include<stdio.h>
#include<math.h>
int main() 
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x,fs,ls,l,s=0,h;
        scanf("%d",&x);
        ls=x%10;
        l=log10(x)+1;
        h=pow(10,l-1);
        fs=x/h;
        s=fs+ls;
      printf("%d
",s);  
    }

}