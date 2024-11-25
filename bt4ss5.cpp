#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap vao mot so tu nhien tu 1-10: ");
		scanf("%d", &n);
		if(n<1 || n>10){
			printf("So khong hop le, vui long nhap lai.\n");
			
		}
		
	}while(n<1 || n>10);
	printf("Bang cuu truong cua ban la\n");
	for(int i=1;i<10;i++){
		printf("%d x %d = %d\n", n,i,n*i);
	}
	return 0;
}
