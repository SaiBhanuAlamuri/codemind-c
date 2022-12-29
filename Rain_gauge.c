#include<stdio.h>
int main(){
    int t,i,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&m);
        if(m<3){
            printf("LIGHT
");
        }
        else if(m>=3 && m<7)
        {
            printf("MODERATE
");
        }
       else{
           printf("HEAVY
");
       } 
    }
}