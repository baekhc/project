#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int tjsxor, x, y, z;

	printf("[1] 비트 AND(&)\n");
	printf("\n");
	printf("[2] 비트 OR(|)\n");
	printf("\n");
	printf("[3] 비트 XOR(^)\n");
	printf("\n");
	printf("[4] 비트 COMPLEMENT(~)\n");
	printf("\n");
	printf("[0] 종료(stop)\n");
	printf("\n");
	printf("위 연산 중 하나를 선택하세요. >> ");
	scanf("%d", &tjsxor);
if (tjsxor == 0) {
		printf("종료합니다.");
		return 0;
	}
if(tjsxor<4){
	printf("비트 연산할 두 정수 입력 >> ");
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
		printf("비트 연산할 하나의 정수 입력 >> ");
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