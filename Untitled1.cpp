#include <stdio.h>
#include <math.h>
float x, y, h, s;
int main() {
	printf("Nhap 2 canh hinh thang: ");
	scanf("%f%f", &x, &y);
	printf("\nNhap chieu cao hinh thang: ");
	scanf("%f", &h);
	s = (x + y) * h / 2;
	printf("\nDien tich hinh thang la: %f", s);
	return 0;
}
