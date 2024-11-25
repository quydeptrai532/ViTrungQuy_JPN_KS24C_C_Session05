#include<stdio.h>

int main(){
	int a,b,i,kiemtra=0;
	printf("Nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap so thu hai:\n");
	scanf("%d",&b);
	while(kiemtra==0)
	{
		i++;
		if(i%a==0&&i%b==0){
			printf("Uoc chung lon nhat cua 2 so vua nhap vao la: %d",i);
			kiemtra=1;
		}
	}
	
	return 0;
}
