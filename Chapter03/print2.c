/* print2.c -- 更多 printf() 的特性 */
#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000;	/* int 为 32 位和 short 为 16 位的系统 */
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;
	printf("un = %u and not %d\n", un, un);
	printf("end= %hd an %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);
	return 0;
}