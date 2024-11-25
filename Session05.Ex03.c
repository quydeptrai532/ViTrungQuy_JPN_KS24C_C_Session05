#include<stdio.h>

int main(){
	int i,n,sum=0;
	printf("nhap vao so nguyen duong can tinh tong");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("tong cac so tu 1 den %d la: %d",n,sum);
	return 0;
}
