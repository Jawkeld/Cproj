#include <stdio.h>


int main4() {

	// 5. �񱳿�����) >,<,>=,<=,==,!=
	// �񱳽��� �����ϸ� ������(true)�� 1 Ʋ����(false)�� 0�� ��ȯ�Ѵ�.
	int num1 = 10, num2 = 11;

	printf("== %d\n", num1 == num2);  //false�̹Ƿ� 0�� ��ȯ
	printf("> %d\n", num1 > num2);
	printf("< %d\n", num1 < num2);
	printf(">= %d\n", num1 >= num2);
	printf("<= %d\n", num1 <= num2);
	printf("!= %d\n", num1 != num2);
	

	// 6. ���迬����) &&(and) ||(or) !(not)
    // true�� 1�� false�� 0�� ��ȯ�Ѵ�.

	// &&: ������ ��� true�̸� 1 �ϳ��� false�� 0�� ��ȯ�Ѵ�.
	//     && �翷���� true false�� ��ȯ�� �� �ִ� ���� ���´�.
    printf("&& : %d\n", num1 != num2 && num1 == 10);
	
	// || :�� �� �ϳ��� ������ 1 �� �� Ʋ������ 0�� ��ȯ�Ѵ�.
	printf("|| : %d\n", num1 == num2 || num2 == 11);

	// ! : 0�� 1��, 0 �̿��� ���ڴ� 0���� �ٲ۴�. ( true�� false��, false�� true��)
	printf("! : %d\n", !(num1 == 10));
	

	


	return 0;
}