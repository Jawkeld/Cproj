#include <stdio.h>


int main6() {

	// 삼항연산자) ? :
	// 조건에 따라서 내 코드를 다르게 수행하고 싶다.
	// 변수 = (조건식) ?    비교식이 true일때 수행할 코드 : 비교식이 false일때 수행할 코드;

	int age = 20;                                                                    //삼항연산자 1.
	(age == 20) ? printf("나이는 20살\n") : printf("나이는 20살이 아님\n");          // 상황에 따라 다른 코드 실행

	// 절댓값으로 만들어 주기
	int num, absolute;

	printf("정수값을 입력하세요 : ");
	scanf("%d\n", &num);     //문자열이 아니면 &기호 추가
	                                                                                 //삼항연산자 2.
	absolute = (num > 0) ? num : num * -1;                                           // 상황에 따라 다른 값 대입
	printf("절댓값은 %d\n", absolute);


	return 0;
}