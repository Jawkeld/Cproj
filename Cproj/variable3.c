#include <stdio.h>

int main4() {

	char name[] = "�̳���"; //%s
	int year = 2023;  //%d
	int month = 02; //%d
	int day = 18; //%d
	char f = 'f'; //%c

	printf("�ۼ��� : %s\n " , name);
	printf("�ۼ���¥ : %d-%02d-%d\n ", year, month, day);
	printf("��� : print%c�� ���ڿ� ���\n",f); 

	return 0;
}