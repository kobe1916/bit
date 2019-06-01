/*1瓶汽水1元，2个空瓶可以换一瓶汽水， 
给20元，可以多少汽水。 
编程实现。*/ 
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。编程实现。
#include <stdio.h>
#include <stdlib.h>

int num (int n)
{
	if (n != 0)//零元返回零瓶
	{
		if (n != 1)//一元返回一瓶
		{
			if (n%2 == 0)//偶数
			{
				return n + num(n/2);//偶数直接返回第n行的个数加第n-1行的个数
			}
			else//奇数
			{
				return (n - 1) + num((n/2) + 1);//奇数时吧第n行余下的一个挪到第n-1行，按n-1行的进行计算
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n = 0;
	printf ("请输入钱数：\n");
	scanf ("%d", &n);
	printf ("%d元可以喝%d瓶汽水！！\n", n, 2*n-1);//方法一：找规律，规律刚好是n元钱能喝2*n-1瓶水；
	printf ("%d元可以喝%d瓶汽水！！\n", n, num(n));//方法二：用递归的方法计算；
	system ("pause");
	return 0;
}

