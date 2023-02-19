#include <stdio.h>


int main7() {

	// 사용자로부터 나이를 입력받아 20살 이상이면 1250원, 20살 미만이면 800원을 받는 지하철 요금정산 프로그램 만들기

	int age;
	int price;
	printf("나이를 입력해 주세요 : ");
	scanf("%d", &age);

	price = (age >= 20) ? 1250 : 850;

	printf("당신의 나이는 %d세이며, 요금은 %d원 입니다.\n", age, price);


	//사용자로부터 나이와 키를 입력받아 나이가 12살 이상이고 키가 120cm이상일 때만 놀이기구 탑승을 허용해주세요

	
	printf("나이를 입력해 주세요 :");
	int ag;
	scanf("%d", &ag);
	printf("키를 입력해 주세요 : ");
	int tall;
	scanf("%d", &tall);

	((ag >= 12) && (tall >= 120)) ? printf("놀이기구에 탑승할 수 있습니다\n") : printf("놀이기구에 탑승할 수 없습니다\n");





	return 0;
}