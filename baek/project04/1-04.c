#include <stdio.h>

void main() {
	int i, j, k;
	int a, b = 2;

	for (i = 0; i<10; i++) {
		for (j = i; j<9; j++)
			printf("%c ", ' ');
		for (a = 0; a <= i; b++) {
			for (j = 2; j<b; j++) {
				if (b % j == 0)
					break;
			}
			if (j == b) {
				printf("%3d ", b);
				a++;
			}
		}
		printf("\n");
	}
}