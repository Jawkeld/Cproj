#include <stdio.h>

int main1() {

	char str[100];
	int num;
	double dnum;
	char ch;

	printf("������ �Է��ϼ��� : ");  // ��� : printf
	scanf("%d",&num);         // �Է� : scanf
	printf("�Է��� ���� %d �Դϴ�.\n",num);

	printf("���ڿ��� �Է��ϼ��� : ");  // ��� : printf
	scanf("%s", str);         // �Է� : scanf //���ڿ��� &��ȣ����              //���ڴ� &��ȣ �����ְ� ���ڿ��� &��ȣ���� �׳� ���´�.
	printf("�Է��� ���� %s �Դϴ�.\n", str);

	printf("�Ǽ��� �Է��ϼ��� : ");  // ��� : printf
	scanf("%lf", &dnum);         // �Է� : scanf
	printf("�Է��� ���� %lf �Դϴ�.\n", dnum);


	rewind(stdin); // scanf �����Է� ���׶����� ���ۺ���
	printf("�������� �Է��ϼ��� : ");  // ��� : printf
	scanf("%c", &ch);         // �Է� : scanf // char�� �ѱ��� �Ұ��� (�ѱ��� ���� 2�� ����)
	printf("�Է��� ���� %c �Դϴ�.\n", ch);




	
	return 0;
}