#include <stdio.h>

int main4() {

	char name[] = "이나경"; //%s
	int year = 2023;  //%d
	int month = 02; //%d
	int day = 18; //%d
	char f = 'f'; //%c

	printf("작성자 : %s\n " , name);
	printf("작성날짜 : %d-%02d-%d\n ", year, month, day);
	printf("기능 : print%c로 문자열 출력\n",f); 

	return 0;
}