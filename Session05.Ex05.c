#include<stdio.h>

int main(){
	int i,n,sum;
	for (i=1;i<10;i++){
		for(n=1;n<=10;n++){
			sum=i*n;
			printf("%d x %d = %d\n",i,n,sum);
			
		}
	}
	return 0;
}
