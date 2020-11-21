/* squares.c -- 计算 1 ~ 20 的平方 */
#include <stdio.h>

int main(void)
{
	int num = 1;
	while (num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num = num + 1;
	}
	return 0;
}