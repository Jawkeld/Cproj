#include <stdio.h>

int main() {

	int kor = 50, eng = 40, math = 60;

	int total = 0;
		total = kor + eng + math;
		double avg = 0.0;
		avg = total / (double)3;
	printf("ÇÕ°è : %d\n",total);
	printf("Æò±Õ : %.2lf\n",avg);


	return 0;
}