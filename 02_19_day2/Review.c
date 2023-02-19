#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {

	printf("hello world\n");
	printf("주석은 //\n");
	
	
	// 다중주석 단축키 : 드래그 후  ctrl+shift+/

	// Ctrl + Z : 뒤로가기
	// Ctrl + Y : 뒤로가기 취소 

	// 변수(varialbe) : 저장공간
	// 변수의 선언(변수를 만드는 방법)
	// 자료형 변수명;
	char word;              // 문자형 변수 선언(1byte)
	int number;             // 정수형 변수 선언(4byte)
	double dNumber;         // 실수형 변수 선언(8byte)
	char str[256];          // 문자열 변수 선언(1*256byte)

	//변수에 값을 대입(대입연산자 이용)
    //변수명 = 데이터값;
    word = 'q';
	number = -3;
	dNumber = 3.141592;
	sprintf(str,"hi world\n");

	// 변수의 초기화(변수의 선언 + 변수의 대입)
	
	char str2[256] = "hello world";

	//변수의 사용
	int number2 = number;  // number2공간에 number값을 넣음
	printf("문자형은 %c\n", word);
	printf("정수형은 %d\n", number);
	printf("실수형은 %lf\n", dNumber);
	printf("문자열은 %s\n", str2);
	printf("문자열은 %s\n", str);

	// + - * / %

	int a = 10;
	int b = 3;
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %lf\n",a,b,a/(double)b);
	printf("%d %% %d = %d\n",a,b,a%b);
	





	return 0;
}