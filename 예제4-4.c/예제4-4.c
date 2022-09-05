#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3; //이미 증가시킨 다음 3을 곱하는 것
	post = (b++) * 3; //증가시키기 전 3을 곱하고 b가 증가되는 것

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);

	return 0;
}