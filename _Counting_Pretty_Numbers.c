#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    int m=0;
	    scanf("%d %d",&a,&b);
	    for(int i=a;i<=b;i++){
	        if(i%10==2 || i%10==3 || i%10==9)m++;
	    }printf("%d
",m);
	}
	return 0;
}

