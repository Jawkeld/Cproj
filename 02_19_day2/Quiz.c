#include <stdio.h>


int main5() {

	// Q.
	int num1 = 27;
	printf("%d \n", num1 >= 10);   //1
	printf("%d \n", num1 != 5);
	
	printf("%d \n", num1 >= 27);  //1
	printf("%d \n", num1 == 27);  
	

	printf("%d \n", num1 < 30);   //1
	printf("%d \n", num1 <= 27);


	// Q. 
	// ���� = 86 ���� = 75 ���� = 88 ��ȸ = 60 ���� = 96
	// ����� ���϶�(�Ҽ�������)

	int a = 86, b = 75, c = 88, d = 60, e = 96;
	int total = a + b + c + d + e;
	double avg = total / (double)5;
    printf("��� : %.2lf\n", avg);


	// Q.
	int num = 5;
	// �� num�� ���������ڸ� ����Ͽ� 6 6 8 ����� ����� ������
	printf("num�� �� : %d \n", ++num);  
	printf("num�� �� : %d \n", num++);
	printf("num�� �� : %d \n", ++num);

 
	return 0;
}