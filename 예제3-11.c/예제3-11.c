#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("�����Է� : ");//�ٷ� ù�ٿ� �Է¹������� ���� \n �Ⱦ��� ��
	scanf("%c", &grade);
	printf("�̸��Է� : ");
	scanf("%s", name); 
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;

}