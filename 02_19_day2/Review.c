#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {

	printf("hello world\n");
	printf("�ּ��� //\n");
	
	
	// �����ּ� ����Ű : �巡�� ��  ctrl+shift+/

	// Ctrl + Z : �ڷΰ���
	// Ctrl + Y : �ڷΰ��� ��� 

	// ����(varialbe) : �������
	// ������ ����(������ ����� ���)
	// �ڷ��� ������;
	char word;              // ������ ���� ����(1byte)
	int number;             // ������ ���� ����(4byte)
	double dNumber;         // �Ǽ��� ���� ����(8byte)
	char str[256];          // ���ڿ� ���� ����(1*256byte)

	//������ ���� ����(���Կ����� �̿�)
    //������ = �����Ͱ�;
    word = 'q';
	number = -3;
	dNumber = 3.141592;
	sprintf(str,"hi world\n");

	// ������ �ʱ�ȭ(������ ���� + ������ ����)
	
	char str2[256] = "hello world";

	//������ ���
	int number2 = number;  // number2������ number���� ����
	printf("�������� %c\n", word);
	printf("�������� %d\n", number);
	printf("�Ǽ����� %lf\n", dNumber);
	printf("���ڿ��� %s\n", str2);
	printf("���ڿ��� %s\n", str);

	// + - * / %

	int a = 10;
	int b = 3;
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %lf\n",a,b,a/(double)b);
	printf("%d %% %d = %d\n",a,b,a%b);
	





	return 0;
}