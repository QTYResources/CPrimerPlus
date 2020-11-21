/* stillbad.c -- 修复了语法错误的程序 */
#include <stdio.h>
int main(void)
{
	int n, n2, n3;
	/* 该程序有一个语义错误 */
	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
	return 0;
}