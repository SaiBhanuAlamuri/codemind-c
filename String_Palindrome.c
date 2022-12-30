#include<stdio.h>
#include<string.h>
int main(){
    char a[20];
    int flag=0,length;
    scanf("%[^
]s",a);
    length=strlen(a);
    for(int i=0;i<length;i++)
    {
        if(a[i]!=a[length-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Not Palindrome");
    else
    printf("Palindrome");
}