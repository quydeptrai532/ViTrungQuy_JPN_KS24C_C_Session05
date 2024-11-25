#include<stdio.h>

int main(){
	int i,n,sum=0;
    printf("nhap so can in ra bang cuu chuong ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
    sum=n*i; 
    printf("%d x %d = %d\n",n,i,sum);
    sum=n*i;  
	}
	return 0;
}
