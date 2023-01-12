#include<stdio.h>
int main(){
    int n,i,a,b,c=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++){
       if(ar[i]>a && ar[i]>b || ar[i]<a && ar[i]<b)
       {
           printf("%d ",ar[i]);
           c=1;
           
       }
       
    }
    if(c==0){
        printf("-1");
    }
}