#include <stdio.h>

int main(void)
{
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height); //python에선 8,9번 코드를 input하나로 해결할 수 있는데.
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

	return 0;
}