#include <stdio.h>

int main(){
	int n,chuso;
	printf("nhap so nguyen bat ky");
	scanf("%d",&n);
	if (n<0){
		n=-n;
	}
	while(n>0){
		chuso=n%10;
		printf("cac chu so cua so da nhap la %d\n",chuso);
		n=n/10;
	}
	return 0;
}
