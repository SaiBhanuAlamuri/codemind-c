#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n],i,a,b,max=-1;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]<a || ar[i]>b )
        {
            if(max<ar[i]){
                max=ar[i];
            }
        }
    }
    if(max==-1){
        printf("%d",max);
    }
    else{
        printf("%d",max);
    }
}