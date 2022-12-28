#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	float b,c,d;
	if(a<=199){
		b=1.20;
	}
	else if(a>=200 && a<400){
		b=1.50;
		
	}
	else if(a>=400 && a<600){
		b=1.80;
	}
	else if(a>=600){
		b=2.00;
		
}
c=a*b;
if(c>400){
	d=c+0.15*c;
}
else{
	d=c+100;
}
printf("%0.2f",d);
}
