#include<stdio.h>

int main(){
	int luachon,so1,so2,so3,danhap=0;
	float sum;
	do {
        printf("\n Menu \n");
        printf("1.Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung Binh Cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. thoat\n");
        printf("Lua chon cua ban: \n");
        scanf("%d", &luachon);
        switch(luachon){
        	case 1: printf("nhap so thu nhat\n");
        	        scanf("%d",&so1);
        	        printf("nhap so thu hai\n");
        	        scanf("%d",&so2);
        	        printf("nhap so thu ba\n");
        	        scanf("%d",&so3);
        	        danhap=1;
        	        break;
        	case 2: if(danhap==1){
        		  sum=so1+so2+so3;
        		  printf("tong 3 so da nhap la %f\n",sum);
			}
			else {
				printf("ban chua nhap 3 so \n");
			}
			break;
			case 3:  if(danhap==1){
              sum=(float)(so1+so2+so3)/3;
              printf("trung binh cong cua 3 so da nhap la %f\n",sum);
			  				     
			}  
			else { printf("ban chua nhap 3 so\n");
			}  
			break;  
			case 4: if(danhap==1){
				int min=so1;
				if(so2<min){
					min=so2;
					
				}
				if(so3<min){
					min=so3;
				}
				printf("so nho nhat la %d\n",min);
			} 
			else {
              printf("ban chua nhap 3 so\n");
			}  
			break;	
			case 5: if(danhap==1){
				int max=so1;
				if (so2>max){
					max=so2;
				}
				if (so3>max){
					max=so3;
				}
				printf("so lon nhat la %d\n",max);
			}
			else {
              printf("ban chua nhap 3 so\n");
			}  
			break;
			case 6: printf("thoat khoi chuong trinh\n");
			        break;		
			
			default : printf("lua chon ko hop le");
			}
			 
		} while (luachon !=6);
		return 0;
}
