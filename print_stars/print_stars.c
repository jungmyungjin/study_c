#include<stdio.h>
/*
�����
1. ����ڷκ��� �� ������ �Է� ���� �� �־����
2. �Ųٷ� ��� ������ �Լ��� ����

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
	printf("�ִ� ���� �Է� : ");
	scanf_s("%d", &max_line);

	printf("\n\n[���� ���� ������]\n");
	Left_Forward(max_line);

	printf("\n\n[���� ���� ������]\n");
	Left_Reverse(max_line);

	printf("\n\n[��� ���� ������]\n");
	Center_Forward(max_line);

	printf("\n\n[��� ���� ������]\n");
	Center_Reverse(max_line);

	return 0;
}