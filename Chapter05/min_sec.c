// min_sec.c -- 把秒数转换成分和秒
#include <stdio.h>

#define SEC_PER_MIN 60	// 1 分钟 60 秒

int main(void)
{
	int sec, min, left;
	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec);	// 读取秒数
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;	// 截断分钟数
		left = sec % SEC_PER_MIN;	// 剩下的秒数
		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");
	return 0;
}