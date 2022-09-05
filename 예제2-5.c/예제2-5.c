#include <stdio.h>

int main(void)
{
	printf("%d\n", 12);
	printf("%d\n", 014); //8진수 14니까 12
	printf("%d\n", 0xc); //16진수 c니까 12

	printf("%o\n", 12); //12를 8진수로 바꾸는 %o
	printf("%x\n", 12); //12를 16진수 소문자로 바꾸는 %x
	printf("%X\n", 12); //12를 16진수  대문자로 바꾸는 %X

	return 0;
}