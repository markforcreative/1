#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//定义函数
int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//输入
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1, &n2);
	//引用函数并输出
	printf("%d\n", Add(n1, n2));
	return 0;
}