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
	// 국어 = 86 영어 = 75 수학 = 88 사회 = 60 과학 = 96
	// 평균을 구하라(소수점까지)

	int a = 86, b = 75, c = 88, d = 60, e = 96;
	int total = a + b + c + d + e;
	double avg = total / (double)5;
    printf("평균 : %.2lf\n", avg);


	// Q.
	int num = 5;
	// 각 num에 증감연산자를 사용하여 6 6 8 결과를 만들어 보세요
	printf("num의 값 : %d \n", ++num);  
	printf("num의 값 : %d \n", num++);
	printf("num의 값 : %d \n", ++num);

 
	return 0;
}