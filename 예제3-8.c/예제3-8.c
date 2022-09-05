#include <stdio.h>

int main(void)
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12; //세율은 const 선언된 즉시 고정되어 바뀌지 않음

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;

}