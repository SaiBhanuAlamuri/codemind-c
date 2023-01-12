#include<stdio.h>
int main(){
    int n,i,j,s=0,c;
    scanf("%d",&n);
    int ar[n];
     for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                c++;
                if(i!=j)
                {
                    ar[j]=0;
                }
            }
        }
        if(k==c &&ar[i]!=0){
            printf("%d ",ar[i]);
            s++;
        }
    }
    if(s==0){
        printf("-1");
    }
}