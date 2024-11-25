#include<stdio.h>

int main(){
	int a,b,luachon;
	float ketqua=0; 
	printf("nhap so thu nhat: ");
	scanf("%d",&a);
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	do {
        printf("\n=== CALCULATOR ===\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1 : ketqua=a+b;
                    printf("Tong 2 so la:%f",ketqua);
                    break;
            case 2 : ketqua=a-b;
                    printf("Hieu 2 so la:%f",ketqua);
                    break;
            case 3 : ketqua=a*b;
                    printf("Tich 2 so la:%f",ketqua);
                    break;
            case 4: if (b!=0){
					ketqua=(float)a/b;
                    printf("Thuong 2 so la:%f",ketqua);
                } else { printf("Ko the thuc hien phep chia cho 0");
				}
                    break;
            case 5 : 
                    printf("Thoat chuong trinh:");
                    break;
                                                    
            default : printf("lua chon ko co trong danh sach vui long chon lai \n");        
        }
    } while (luachon!= 5);
return 0;
}
