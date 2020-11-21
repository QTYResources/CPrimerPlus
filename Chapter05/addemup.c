/* addemup.c -- 几种常见的语句 */
#include <stdio.h>
int main(void)	/* 计算前 20 个整数的和 */
{
	int count, sum;	/* 声明 */
	count = 0;	/* 表达式语句 */
	sum = 0;	/* 表达式语句 */
	while (count++ < 20)	/* 迭代语句 */
	{
		sum = sum + count;
	}
	printf("sum = %d\n", sum);	/* 表达式语句 */
	return 0;	/* 跳转语句 */
}