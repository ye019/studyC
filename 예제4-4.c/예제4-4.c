#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3; //�̹� ������Ų ���� 3�� ���ϴ� ��
	post = (b++) * 3; //������Ű�� �� 3�� ���ϰ� b�� �����Ǵ� ��

	printf("�ʱ갪 a = %d, b = %d\n", a, b);
	printf("������: (++a) * 3 = %d, ������: (b++) * 3 = %d\n", pre, post);

	return 0;
}