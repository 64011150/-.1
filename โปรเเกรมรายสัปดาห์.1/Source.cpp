#include<stdio.h>
int main() {
	float a;
	float b;
	scanf_s("%f",&a);
	scanf_s("%f",&b);
	float c;
	c = a / b / b;
		if (18.5 > c)
			printf("น้ำหนักต่ำกว่าเกณฑ์");
		if (24.9 >= c >= 18.5)
			printf("ปกติ");
		if (29.9 >= c >= 25)
			printf("สูงกว่ามาตรฐาน");
		if (c > 30)
			printf("อ้วนเกินไป");

			return 0;
}