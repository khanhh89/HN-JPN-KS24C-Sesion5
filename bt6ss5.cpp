#include<stdio.h>
int main(){
	float numb1, numb2;
	int select;
	printf("Nhap so thu nhat: ");
	scanf("%f", &numb1);
	printf("Nhap so thu hai: ");
	scanf("%f", &numb2);
	do{
		printf("\n--CALCULATOR--\n");
		printf("1.Tong hai so.\n");
		printf("2.Hieu hai so.\n");
		printf("3.Tich hai so.\n");
		printf("4.Thuong hai so.\n");
		printf("5.Close\n");
		printf("Chon chuc nang: ");
		scanf("%d", &select);
		switch(select){
			case 1:
				printf("Tong cua 2 so la: %.2f\n", numb1 + numb2);
				break;
			case 2: 
			     printf("Hieu cua 2 so la: %.2f\n", numb1 - numb2);
			break;
			case 3: 
			    printf("Tich cua 2 so la: %.2f", numb1 * numb2);
			break;
			case 4: 
			    if(numb2 != 0){
				printf("Thuong 2 so la: %.2f\n", numb1 / numb2);
			    }else{
				printf("Khong chia duoc cho 0.\n");
			    }
				break;
			case 5: 
			  printf("Thoat chuong trinh.\n");
			  break;
			default: 
			  printf("Khong hop le, moi chon lai.\n");
			    
		}
		
	} while (select != 0);
	
	return 0;
}
