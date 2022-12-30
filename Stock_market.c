#include<stdio.h>
int main(){
	int a,i;
	scanf("%d",&a);
	while(a--){
		int x,y;
		scanf("%d%d",&x,&y);
		if(y>x){
			printf("PROFIT
");
		}
		else if(y<x){
			printf("LOSS
");
		}
		else{
			printf("NEUTRAL
");
		}
	}
}