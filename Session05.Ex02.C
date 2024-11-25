	#include <stdio.h>
	
	int main(){
		int socandoan=152,sodoan,kiemtra=0;
		while(kiemtra==0){
			printf("nhap vao mot so bat ky ");
			scanf("%d",&sodoan);
			if(sodoan>socandoan){
				printf("so ban nhap lon hon so can doan\n");
			}
			else{
				if (sodoan<socandoan){
					printf("so ban nhap nho hon so can doan\n");
					
				}
				else {
					printf("ban doan dung r");
					kiemtra=1;
				}
			}
		}
		return 0;
	}
