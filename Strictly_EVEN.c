#include<stdio.h>
int main(){
    int n,i,c=0,b=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
       if(i%2==0)
       {
           if(ar[i]%2==0)
           {
               c++;
           }
       }
    }
    for(i=0;i<n;i++)
    {
      if(ar[i]%2==0)
      {
       b++ ;  
      } 
    }
    if(b==c)
    {
    printf("True");   
    }
    else
    {
     printf("False");   
    }
}