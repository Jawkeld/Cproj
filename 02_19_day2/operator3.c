#include <stdio.h>


int main4() {

	// 5. 비교연산자) >,<,>=,<=,==,!=
	// 비교식을 제시하면 맞을때(true)는 1 틀릴때(false)는 0을 반환한다.
	int num1 = 10, num2 = 11;

	printf("== %d\n", num1 == num2);  //false이므로 0을 반환
	printf("> %d\n", num1 > num2);
	printf("< %d\n", num1 < num2);
	printf(">= %d\n", num1 >= num2);
	printf("<= %d\n", num1 <= num2);
	printf("!= %d\n", num1 != num2);
	

	// 6. 관계연산자) &&(and) ||(or) !(not)
    // true면 1을 false면 0을 반환한다.

	// &&: 양쪽이 모두 true이면 1 하나라도 false면 0을 반환한다.
	//     && 양옆에는 true false로 반환될 수 있는 것을 적는다.
    printf("&& : %d\n", num1 != num2 && num1 == 10);
	
	// || :둘 중 하나라도 맞으면 1 둘 다 틀릴때만 0을 반환한다.
	printf("|| : %d\n", num1 == num2 || num2 == 11);

	// ! : 0을 1로, 0 이외의 숫자는 0으로 바꾼다. ( true를 false로, false를 true로)
	printf("! : %d\n", !(num1 == 10));
	

	


	return 0;
}