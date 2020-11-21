/* convert.c -- 自动类型转换 */
#include <stdio.h>

int main(void)
{
	char ch;
	int i;
	float fl;
	fl = i = ch = 'C';	/* 第9行 */
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);	/* 第 10 行 */
	ch = ch + 1;	/* 第 11 行 */
	i = fl + 2 * ch;	/* 第 12 行 */
	fl = 2.0 * ch + i;	/* 第 13 行 */
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);	/* 第 14 行 */
	ch = 1107;	/* 第 15 行 */
	printf("Now ch = %c\n", ch);	/* 第 16 行 */
	ch = 80.89;	/* 第 17 行 */
	printf("Now ch = %c\n", ch);	/* 第 18 行 */
	return 0;
}