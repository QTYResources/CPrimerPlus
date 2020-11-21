// scores_in.c -- 使用循环处理数组
#include <stdio.h>

#define SIZE 10
#define PAR 72

int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;
	printf("Enter %d golf scores:\n", SIZE);
	for (index = 0; index < SIZE; index++) 
	{
		scanf("%d", &score[index]);	// 读取 10 个分数
	}
	printf("The scores read in are as follows:\n");
	for (index = 0; index < SIZE; index++) 
	{
		printf("%5d", score[index]);	// 验证输入
	}
	printf("\n");
	for (index = 0; index < SIZE; index++) 
	{
		sum += score[index];	// 求总分
	}
	average = (float)sum / SIZE;	// 求平均分
	printf("Sum of scores = %d, average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - PAR);
	return 0;
}
