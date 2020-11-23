// electric.c -- 计算电费
#include <stdio.h>

#define RATE1 0.13230	// 首次使用 360 kwh 的费率
#define RATE2 0.15040	// 接着再使用 108 kwh 的费率
#define RATE3 0.30025	// 接着再使用 252 kwh 的费率
#define RATE4 0.34025	// 使用超过 720 kwh 的费率
#define BREAK1 360.0	// 费率的第 1 个分界点
#define BREAK2 468.0	// 费率的第 2 个分界点
#define BREAK3 720.0	// 费率的第 3 个分界点
// 使用 360 kwh 的费用
#define BASE1 (RATE1 * BREAK1)
// 使用 468 kwh 的费用
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
// 使用 720 kwh 的费率
#define BASE3 (BASE2 + (RATE3 * (BREAK3 - BREAK2)))

int main(void)
{
	double kwh;		// 使用的千瓦时
	double bill;	// 电费
	printf("Please enter the kwh used.\n");
	scanf("%lf", &kwh);	// %lf 对应 double 类型
	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)	// 360 ~ 468 kwh
		bill = BASE1 + RATE2 * (kwh - BREAK1);
	else if (kwh <= BREAK3) // 468 ~ 720 kwh
		bill = BASE2 + RATE3 * (kwh - BREAK2);
	else					// 超过 720 kwh
		bill = BASE3 + RATE4 * (kwh - BREAK3);
	printf("The chare for %.1f kwh is $%1.2f.\n", kwh, bill);
	return 0;
}