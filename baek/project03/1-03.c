#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int dump, x, y,a;
	printf("��ȯ�� �� ������ �Է��ϼ���  >>  ");
	scanf("%d %d", &x, &y);
	printf("\n");
	printf("�Է��� �� ��: x = %d and y = %d\n\n", x, y);
	printf("�ӽ� ���� ��� �̿��� [1]\n");
	printf("������ �������� ��ȯ ��� [2]\n");
	printf("������ ���������� ��ȯ ��� [3]\n");
	printf("XOR ������ ^ �̿���[4]\n");
	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >> ");
	scanf("%d", &a);
	printf("\n");
	if (a == 2) {
		x = x + y;
		y = x - y;
		x = x - y;
	}
	else if (a == 1) {
		dump = x;
		x = y;
		y = dump;
	}
	else if (a == 3) {
		x = x*y;
		y = x / y;
		x = x / y;
	}
	else if (a == 4) {
		x = x^y;
		y = x ^ y;
		x = x^y;
	}
	printf("��ȯ�� �� ��: x = %d and y = %d", x, y);
}