#include<stdio.h>
int main(){
    int n,max,min,s=0,i;
    scanf("%d",&n);
    float avg=0.0;
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        
        if(a[i]>max){
            max=a[i];
            
        }
        
        if(a[i]<min){
            min=a[i];
            
        }
        
    }
    for(i=0;i<n;i++){
     if(a[i]!=min && a[i]!=max){
        s=s+a[i]; 
     }
    }
    avg=s/(n-2);
    printf("%.5f",avg);
}