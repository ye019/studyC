#include <stdio.h>

int main(void)
{
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height); //python���� 8,9�� �ڵ带 input�ϳ��� �ذ��� �� �ִµ�.
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);

	return 0;
}