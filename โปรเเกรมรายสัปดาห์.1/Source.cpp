#include<stdio.h>
int main() {
	float a;
	float b;
	scanf_s("%f",&a);
	scanf_s("%f",&b);
	float c;
	c = a / b / b;
		if (18.5 > c)
			printf("���˹ѡ��ӡ���ࡳ��");
		if (24.9 >= c >= 18.5)
			printf("����");
		if (29.9 >= c >= 25)
			printf("�٧�����ҵðҹ");
		if (c > 30)
			printf("��ǹ�Թ�");

			return 0;
}