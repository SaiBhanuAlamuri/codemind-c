#include<stdio.h>
int main(){
    int n,a,flag,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++){
        flag=0;
        if(a==ar[i]){
            flag=1;
            break;
        }
        
    }
    if(flag==1){
        printf("True");
    }
    else{
        printf("False");
    }
}