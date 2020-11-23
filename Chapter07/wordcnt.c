// wordcnt.c -- 统计字符数、单词数、行数
#include <stdio.h>
#include <ctype.h>	// 为 isspace() 函数提供原型
#include <stdbool.h>	// 为 bool、true、false 提供定义

#define STOP '|'

int main(void)
{
	char c;	// 读入字符
	char prev;	// 读入的前一个字符
	long n_chars = 0L;	// 字符数
	int n_lines = 0;	// 行数
	int n_words = 0;	// 单词数
	int p_lines = 0;	// 不完整的行数
	bool inword = false;	// 如果 c 在单词中， inword 等于 true
	printf("Enter text to be analyzed (| to terminate):\n");
	prev = '\n';	// 用于识别完整的行
	while ((c = getchar()) != STOP)
	{
		n_chars++;	// 统计字符
		if (c == '\n')
			n_lines++;	// 统计行
		if (!isspace(c) && !inword)
		{
			inword = true;	// 开始一个新的单词
			n_words++; // 统计单词
		}
		if (isspace(c) && inword) {
			inword = false;	// 达到单词的末尾
		}
		prev = c;	// 保存字符的值
	}
	if (prev != '\n') {
		p_lines = 1;
	}
	printf("characters = %ld, words = %d, lines = %d, ",
		n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);
	return 0;
}