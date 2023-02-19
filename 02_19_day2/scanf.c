#include <stdio.h>

int main1() {

	char str[100];
	int num;
	double dnum;
	char ch;

	printf("정수를 입력하세요 : ");  // 출력 : printf
	scanf("%d",&num);         // 입력 : scanf
	printf("입력한 값은 %d 입니다.\n",num);

	printf("문자열을 입력하세요 : ");  // 출력 : printf
	scanf("%s", str);         // 입력 : scanf //문자열은 &기호없이              //숫자는 &기호 적어주고 문자열은 &기호없이 그냥 적는다.
	printf("입력한 값은 %s 입니다.\n", str);

	printf("실수를 입력하세요 : ");  // 출력 : printf
	scanf("%lf", &dnum);         // 입력 : scanf
	printf("입력한 값은 %lf 입니다.\n", dnum);


	rewind(stdin); // scanf 문자입력 버그때문에 버퍼비우기
	printf("문자형을 입력하세요 : ");  // 출력 : printf
	scanf("%c", &ch);         // 입력 : scanf // char은 한글이 불가능 (한글은 공간 2개 차지)
	printf("입력한 값은 %c 입니다.\n", ch);




	
	return 0;
}