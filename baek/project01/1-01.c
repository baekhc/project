
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	double a=1;
	int wjs, gn;
	printf("���� �������� [��ȯ�� ����] --> [��ȯ��� ����]�� �����մϴ�.\n");
	printf("[1] ����(m) [2]��ġ(in) [3]��Ʈ(ft) [4]�ߵ�(yd) [0]����\n");
	printf("[��������] --> [��ȯ����] �ΰ��� �޴� ��ȣ�� �����ϼ��� >> ");
	scanf("%d %d", &wjs, &gn);
	
	while(a!=0){
printf("[��ȯ�� ����]�� ���̸� �Է��ϼ���");
scanf("%lf", &a);
if (a == 0) {
	printf("�����մϴ�.");
	return 0;
	}
	if (wjs == 1) {
		switch (gn) {
		case 2:
			printf("[���] %10.2lf(����) --> %10.2lf(��ġ)\n", a, a*39.370079);
			break;
		case 3:
			printf("[���] %10.2lf(����) --> %10.2lf(��Ʈ)\n", a, a*3.28084);
			break;
		case 4:
			printf("[���] %10.2lf(����) --> %10.2lf(�ߵ�)\n", a, a*1.093613);
			break;
		}	
	}
	else if(wjs== 2)switch (gn) {
	case 1:
		printf("[���] %10.2lf(��ġ) --> %10.2lf(����)\n", a, a*0.0254);
		break;
	case 3:
		printf("[���] %10.2lf(��ġ) --> %10.2lf(��Ʈ)\n", a, a*0.083333);
		break;
	case 4:
		printf("[���] %10.2lf(��ġ) --> %10.2lf(�ߵ�)\n", a, a*0.027778);
		break;

	}
	else if (wjs == 3)switch (gn) {
	case 1:
		printf("[���] %10.2lf(��Ʈ) --> %10.2lf(����)\n", a, a*0.3048);
		break;
	case 2:
		printf("[���] %10.2lf(��Ʈ) --> %10.2lf(��ġ)\n", a, a* 12);
		break;
	case 4:
		printf("[���] %10.2lf(��Ʈ) --> %10.2lf(�ߵ�)\n", a, a*0.333333);
		break;

	}
	else if (wjs == 4)switch (gn) {
	case 1:
		printf("[���] %10.2lf(�ߵ�) --> %10.2lf(����)\n", a, a*0.9144);
		break;
	case 3:
		printf("[���] %10.2lf(�ߵ�) --> %10.2lf(��Ʈ)\n", a, a* 3);
		break;
	case 2:
		printf("[���] %10.2lf(�ߵ�) --> %10.2lf(��ġ)\n", a, a* 36);
		break;

	
	}
	}
	
	}






