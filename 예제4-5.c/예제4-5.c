#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10;
	int res;

	res = (a > b); //거짓이므로 결과값0 저장
	printf("a > b : %d\n", res);
	res = (a >= b); //거짓이므로 0 저장
	printf("a >= b : %d\n", res);
	res = (a < b); //참이므로 1 저장
	printf("a < b : %d\n", res);
	res = (a <= b);
	printf("a <= b : %d\n", res);
	res = (a <= c);
	printf("a <= c : %d\n", res);
	res = (a == b);
	printf("a == b : %d\n", res);
	res = (a == c);
	printf("a == c : %d\n", res);

	res = (a != c);
	printf("a != c : %d\n", res);

	return 0;

}