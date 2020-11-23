// cypher1.c -- 更改输入，空格不变
#include <stdio.h>

#define SPACE ' '	// SPACE 表示单引号-空格-单引号
 
int main(void)
{
	char ch;
	ch = getchar();	// 读取一个字符
	while (ch != '\n')	// 当一行未结束时
	{
		if (ch == SPACE)	// 留下空格
			putchar(ch);	// 该字符不变
		else
			putchar(ch + 1);	// 改变其他字符
		ch = getchar();	// 获取下一个字符
	}
	putchar(ch);	// 打印换行符
	return 0;
}