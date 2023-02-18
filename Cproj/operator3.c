#include <stdio.h>

int main8() {

	// 산술연산자
	// + - * / %
	// + : 왼쪽+오른쪽
	// - : 왼쪽-오른쪽
	// * : 왼쪽*오른쪽
	// / : 왼쪽/오른쪽
	// % : 왼쪽값을 오른쪽 값으로 나눈 나머지

	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);




	return 0;
}