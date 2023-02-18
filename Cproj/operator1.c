#include <stdio.h>

int main6() {

	// 프로그래밍 언어에는 연산 기호(연산자-operator)가 제공된다.
	// 연산 기호는 각각의 기능을 제공해주고 사용법이 정해져있다.
	// + - * ; % ...

	3 + 4;

	int num1, num2;
	num1 = 1; num2 = 2;

	// 변수를 통해서 계산을 하면 변수 안의 값이 사용되서 계산된다.
	num1 + num2;
	printf("합은 : %d\n", num1 + num2);
	

	//  연산결과를 변수에 담을 수 있음
	int num3 = 0;
	num3 = num1 - num2;
	printf("차는 : %d\n", num3);

	return 0;
}