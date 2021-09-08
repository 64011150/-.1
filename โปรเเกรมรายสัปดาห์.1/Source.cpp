#include<stdio.h>
int main() {
	float a;
	float b;
	scanf_s("%f",&a);
	scanf_s("%f",&b);
	float c;
	c = a / b / b;
		if (18.5 > c)
			printf("Underweight");
		if (24.9 >= c >= 18.5)
			printf("Normal");
		if (29.9 >= c >= 25)
			printf("Overweight");
		if (c > 30)
			printf("Obese");

			return 0;
}
