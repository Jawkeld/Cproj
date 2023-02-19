#include <stdio.h>

int main2() {

	int num1, num2;
	
	printf("num1의 값을 입력하세요 :");
	scanf("%d", &num1);
	printf("num2의 값을 입력하세요 :");
	scanf("%d", &num2);

	// 산술 연산자
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	





	return 0;
}