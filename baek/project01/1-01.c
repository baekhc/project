
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	double a=1;
	int wjs, gn;
	printf("다음 단위에서 [변환할 단위] --> [변환결과 단위]로 연산합니다.\n");
	printf("[1] 미터(m) [2]인치(in) [3]피트(ft) [4]야드(yd) [0]종료\n");
	printf("[이전단위] --> [변환단위] 두개의 메뉴 번호를 선택하세요 >> ");
	scanf("%d %d", &wjs, &gn);
	
	while(a!=0){
printf("[변환할 단위]의 길이를 입력하세요");
scanf("%lf", &a);
if (a == 0) {
	printf("종료합니다.");
	return 0;
	}
	if (wjs == 1) {
		switch (gn) {
		case 2:
			printf("[결과] %10.2lf(미터) --> %10.2lf(인치)\n", a, a*39.370079);
			break;
		case 3:
			printf("[결과] %10.2lf(미터) --> %10.2lf(피트)\n", a, a*3.28084);
			break;
		case 4:
			printf("[결과] %10.2lf(미터) --> %10.2lf(야드)\n", a, a*1.093613);
			break;
		}	
	}
	else if(wjs== 2)switch (gn) {
	case 1:
		printf("[결과] %10.2lf(인치) --> %10.2lf(미터)\n", a, a*0.0254);
		break;
	case 3:
		printf("[결과] %10.2lf(인치) --> %10.2lf(피트)\n", a, a*0.083333);
		break;
	case 4:
		printf("[결과] %10.2lf(인치) --> %10.2lf(야드)\n", a, a*0.027778);
		break;

	}
	else if (wjs == 3)switch (gn) {
	case 1:
		printf("[결과] %10.2lf(피트) --> %10.2lf(미터)\n", a, a*0.3048);
		break;
	case 2:
		printf("[결과] %10.2lf(피트) --> %10.2lf(인치)\n", a, a* 12);
		break;
	case 4:
		printf("[결과] %10.2lf(피트) --> %10.2lf(야드)\n", a, a*0.333333);
		break;

	}
	else if (wjs == 4)switch (gn) {
	case 1:
		printf("[결과] %10.2lf(야드) --> %10.2lf(미터)\n", a, a*0.9144);
		break;
	case 3:
		printf("[결과] %10.2lf(야드) --> %10.2lf(피트)\n", a, a* 3);
		break;
	case 2:
		printf("[결과] %10.2lf(야드) --> %10.2lf(인치)\n", a, a* 36);
		break;

	
	}
	}
	
	}






