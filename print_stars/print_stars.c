#include<stdio.h>
/*
별찍기
1. 사용자로부터 별 갯수를 입력 받을 수 있어야함
2. 거꾸로 출력 가능한 함수도 구현

*
**
***
****
***** 

*/

int Left_Forward(int max_line){
	for (int i = 0; i < max_line; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int Left_Reverse(int max_line) {
	for (int i = max_line; i >= 0; i--) {
		for (int j = 0; 0 <= i - j; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int Center_Forward(int max_line){
	for (int i = 0; i < max_line; i++) {
		for (int j1 = 0	; j1 < max_line-i-1; j1++) {
			printf(" ");
		}
		for (int j2 = 0; j2 < (2 * i) +1; j2++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
}

int Center_Reverse(int max_line) {
	for (int i = max_line; i > 0; i--) {
		for (int j1 = i; j1 < max_line; j1++) {
			printf(" ");
		}
		for (int j2 = 0; j2 < (2 * i) - 1; j2++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int main() {
	int max_line = 0;
	printf("최대 라인 입력 : ");
	scanf_s("%d", &max_line);

	printf("\n\n[왼쪽 정렬 정방향]\n");
	Left_Forward(max_line);

	printf("\n\n[왼쪽 정렬 역방향]\n");
	Left_Reverse(max_line);

	printf("\n\n[가운데 정렬 정방향]\n");
	Center_Forward(max_line);

	printf("\n\n[가운데 정렬 역방향]\n");
	Center_Reverse(max_line);

	return 0;
}