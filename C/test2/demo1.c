#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���庯��
int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//����
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1, &n2);
	//���ú��������
	printf("%d\n", Add(n1, n2));
	return 0;
}