#include <stdio.h>
int findGCD(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;      
        b = a % b;     
        a = temp;   
    }
    return a; 
}
int main(){ 
    int num1, num2;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
    } else {
        int gcd = findGCD(num1, num2);
        printf("Uoc chung lon nhat (UCLN) cua %d va %d la: %d\n", num1, num2, gcd);
    }
     return 0;
}
