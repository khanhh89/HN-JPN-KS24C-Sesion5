#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap so nguyen duong bat ki: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("So nhap khong hop le\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
        printf("Lan lap thu %d, ket qua cua sum la: %d\n", i, sum);
    }
    printf("Tong la: %d\n", sum);

    return 0;
}
