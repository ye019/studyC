#include <stdio.h>

int main(void)
{
	printf("%d\n", 12);
	printf("%d\n", 014); //8���� 14�ϱ� 12
	printf("%d\n", 0xc); //16���� c�ϱ� 12

	printf("%o\n", 12); //12�� 8������ �ٲٴ� %o
	printf("%x\n", 12); //12�� 16���� �ҹ��ڷ� �ٲٴ� %x
	printf("%X\n", 12); //12�� 16����  �빮�ڷ� �ٲٴ� %X

	return 0;
}