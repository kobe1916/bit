#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//fib
// 1 1 2 3 5 8 13 21 34 55


//1.递归法
//int fib(int n)
//{
//	while (1)
//	{
//		if (n < 3)
//			return 1;
//		else
//			return fib(n - 1) + fib(n - 2);
//
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a = fib(n);
//	printf("%d", a);
//	system("pause");
//	return 0;
//}


//2.迭代法
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while(n>2)
	{
		c = a+b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a = fib(n);
	printf("%d", a);
	system("pause");
	return 0;
}
