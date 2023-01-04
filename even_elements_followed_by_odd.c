#include<stdio.h>
int main(){
    int n,i,temp=0;
    scanf("%d",&n);
    int ar[n],j=0,k=0,arr1[n],arr2[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        if(ar[i]%2!=0)
        {
            arr1[j]=ar[i];
            j++;
        }
        else
        {
            arr2[k]=ar[i];
            k++;
        }
    }
    for(i=0;i<k;i++){
        printf("%d ",arr2[i]);
    }
    for(i=0;i<j;i++){
        printf("%d ",arr1[i]);
    }
}