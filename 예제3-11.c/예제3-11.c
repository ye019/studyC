#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("학점입력 : ");//바로 첫줄에 입력받으려고 끝에 \n 안쓰는 것
	scanf("%c", &grade);
	printf("이름입력 : ");
	scanf("%s", name); 
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;

}