#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a = 1;
	int x, y, z;
	int dump = 0;
	int dump2 = 0;
	int dump3 = 0;
	int count2;
	while (a != 0)
	{
		printf("������ �ϳ� �Է��ϼ���. >> ");
		scanf("%d", &a);
		if (a == 0)
			break;
		x = a;
		y = a;
		z = a;
	printf("\n\n       ������: ");
		for (int i = 32; i > 0; i--) {
			printf("%c", ((a >> i - 1) & 1) ? '1' : '0');
		}
		printf("\n\n       ������: %8o       ", x);
		for (int count = 1; x > 0; count = count * 10)
		{
			dump += ((x % 8)* count);
			x = x / 8;
		}
		printf("%d", dump);
		dump = 0;
		printf("\n\n       16����: %8X       ", y);
		count2 = 0;
		while (y > 0)
		{
			dump2 = y % 16;
			y = y / 16;
			count2++;
		}
		for (int i = count2; i>0; i--)
		{
			z = a;
			for (int j = 0; j < i - 1; j++)
			{
				z = z / 16;
			}
			dump3 = z % 16;
			if (dump3 < 10)
			{
				printf("%d", dump3);
			}
			else
			{
				printf("%c", dump3 + 55);
			}
		}printf("\n");
	}
	printf("�����մϴ�. \n");
	return 0;
}