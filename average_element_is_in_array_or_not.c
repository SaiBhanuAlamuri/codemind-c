#include<stdio.h>
int main(){
	int n,ar[n],i,s=0,avg,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++){
	s=s+ar[i];
	}
	avg=s/n;
	for(i=0;i<n;i++){
		flag=0;
		if(avg==ar[i]){
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