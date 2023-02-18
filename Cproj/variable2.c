#include <stdio.h>

int main3() {
	// 자료형의 종류
	// 한글자변수,정수변수,소수점있는 숫자변수,여러문자 변수

	// 문자변수(한글자) 1byte  사용키워드: %c
	char one = 'A';

	// 정수변수(소수점 없는 수) 4byte 사용키워드: %d
	int number1 = 123;

	// 실수변수(소수점 있는 수) 8byte 사용키워드: %lf
	double number2 = -3.14;

	// 문자열 변수(여러글자) // 사용키워드: %s
	char multi[100] = "99글자까지 입력 가능합니다.";
	// 숫자생략시 자동으로 입력한 만큼 데이터공간 생성

	// 자료형을 사용하는 이유 
	// 1. 개발자의 의도를 명확하게 전달하기 위해
	// 2. 개발자의 실수를 컴파일러(visual studio)가 검출해내기 위해
	// 3. 자료형마다 담을 수 있는 데이터의 크기(공간의 크기)가 다르다 - 최적화




	return 0;
}
