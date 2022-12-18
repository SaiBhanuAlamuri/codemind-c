#include<stdio.h>
int main(){
    int n,r=0,rev=0,r1=0,rev1=0;
    scanf("%d",&n);
    int s=n*n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
   int rs=rev*rev;
   while(rs!=0){
       r1=rs%10;
       rev1=rev1*10+r1;
       rs=rs/10;
   }
   if(s==rev1){
       printf("True");
   }
   else{
       printf("False");
   }
   
    
}