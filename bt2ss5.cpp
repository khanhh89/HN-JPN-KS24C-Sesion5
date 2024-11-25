#include<stdio.h>
int main(){
	int number = 10;
	int inputNumber;
	printf("Ket thuc chuong trinh khi so ban nhap vao la dung \n");
	
	do {

	printf("Nhap 1 so di ban: ");
	scanf("%d", &inputNumber);
	if(inputNumber != number){
		printf("Sai roi nhap lai di.\n");}
		
	} while (inputNumber != number);
	printf("Chuan roi! So cho truoc la: %d", number);
	return 0; 
	
}
