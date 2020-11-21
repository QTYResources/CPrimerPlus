// floats.c -- 一些浮点型修饰符的组合
#include <stdio.h>

int main(void)
{
	const double RENT = 3852.99;	// const 变量
	printf("*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f*\n", RENT);
	printf("*%3.1f*\n", RENT);
	printf("*%10.3f*\n", RENT);
	printf("*%10.3E*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);
	return 0;
}