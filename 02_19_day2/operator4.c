#include <stdio.h>


int main6() {

	// ���׿�����) ? :
	// ���ǿ� ���� �� �ڵ带 �ٸ��� �����ϰ� �ʹ�.
	// ���� = (���ǽ�) ?    �񱳽��� true�϶� ������ �ڵ� : �񱳽��� false�϶� ������ �ڵ�;

	int age = 20;                                                                    //���׿����� 1.
	(age == 20) ? printf("���̴� 20��\n") : printf("���̴� 20���� �ƴ�\n");          // ��Ȳ�� ���� �ٸ� �ڵ� ����

	// �������� ����� �ֱ�
	int num, absolute;

	printf("�������� �Է��ϼ��� : ");
	scanf("%d\n", &num);     //���ڿ��� �ƴϸ� &��ȣ �߰�
	                                                                                 //���׿����� 2.
	absolute = (num > 0) ? num : num * -1;                                           // ��Ȳ�� ���� �ٸ� �� ����
	printf("������ %d\n", absolute);


	return 0;
}