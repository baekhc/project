#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int tjsxor, x, y, z;

	printf("[1] ��Ʈ AND(&)\n");
	printf("\n");
	printf("[2] ��Ʈ OR(|)\n");
	printf("\n");
	printf("[3] ��Ʈ XOR(^)\n");
	printf("\n");
	printf("[4] ��Ʈ COMPLEMENT(~)\n");
	printf("\n");
	printf("[0] ����(stop)\n");
	printf("\n");
	printf("�� ���� �� �ϳ��� �����ϼ���. >> ");
	scanf("%d", &tjsxor);
if (tjsxor == 0) {
		printf("�����մϴ�.");
		return 0;
	}
if(tjsxor<4){
	printf("��Ʈ ������ �� ���� �Է� >> ");
	scanf("%d %d", &x, &y);
	
	if (tjsxor == 1) {
		printf("x = ");
		for (z = 32; z > 0; z--) {
			printf("%c", ((x >> z - 1) & 1) ? '1' : '0');
		}
		
		printf("   %d\n", x);

		printf("y = ");
		for (z = 32; z > 0; z--) {
			printf("%c", ((y >> z - 1) & 1) ? '1' : '0');
		}
		
		printf("   %d\n", y);
		printf("x & y = ");
		int a = x&y;
		for (z = 32; z > 0; z--) {
			printf("%c", ((a >> z - 1) & 1) ? '1' : '0');
		}
		printf("   %d\n", x&y);
	}
	else if (tjsxor == 2) {
		printf("x = ");
		for (z = 32; z > 0; z--) {
			printf("%c", ((x >> z - 1) & 1) ? '1' : '0');
		}

		printf("   %d\n", x);

		printf("y = ");
		for (z = 32; z > 0; z--) {
			printf("%c", ((y >> z - 1) & 1) ? '1' : '0');
		}

		printf("   %d\n", y);
		printf("x | y = ");
		int a = x|y;
		for (z = 32; z > 0; z--) {
			printf("%c", ((a >> z - 1) & 1) ? '1' : '0');
		}
		printf("   %d\n", x|y);
	}
	else if (tjsxor == 3) {
		printf("x = ");
		for (z = 32; z > 0; z--) {
			printf("%c", ((x >> z - 1) & 1) ? '1' : '0');
		}

		printf("   %d\n", x);

		printf("y = ");
		for (z = 32; z > 0; z--) {
			printf("%c", ((y >> z - 1) & 1) ? '1' : '0');
		}

		printf("   %d\n", y);
		printf("x ^ y = ");
		int a = x^y;
		for (z = 32; z > 0; z--) {
			printf("%c", ((a >> z - 1) & 1) ? '1' : '0');
		}
		printf("   %d\n", x^y);
	}}
	else if (tjsxor == 4) {
		printf("��Ʈ ������ �ϳ��� ���� �Է� >> ");
		scanf("%d", &x);
		printf("x = ");
		for (z = 32; z > 0; z--) {
			printf("%c", ((x >> z - 1) & 1) ? '1' : '0');
		}

		printf("   %d\n", x);


		
		printf("~x = ");
		int a = ~x;
		for (z = 32; z > 0; z--) {
			printf("%c", ((a >> z - 1) & 1) ? '1' : '0');
		}
		printf("   %d\n", ~x);
	}
	
}