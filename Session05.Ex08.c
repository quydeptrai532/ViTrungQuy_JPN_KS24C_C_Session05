#include<stdio.h>

int main(){
	int a,b,i=1,kiemtra=0;
	printf("Nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap so thu hai:\n");
	scanf("%d",&b);
	while(kiemtra==0)
	{
		i++;
		if(a>b){
			if(i>a){
				printf("Hai so ko co boi chung nho nhat");
				kiemtra=1;
			}
		} else {
			if(a<=b){
				if(i>b){
				printf("Hai so ko co boi chung nho nhat");
				kiemtra=1;
				}
			}
		}
		if(a%i==0&&b%i==0){
			printf("Boi chung nho nhat cua 2 so vua nhap vao la: %d",i);
			kiemtra=1;
		}
	}
	
	return 0;
}
