//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和.
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
#include <stdio.h>
int DigitSum(int n)
{
	int sum=0;
	int m=0;
	if(n!=0)
	{
		m=n%10;
		n=n/10;
		sum=m+DigitSum(n);
	}
	return sum;
}
int main ()
{
	int a;
	printf("请输入一个整数： ");
	scanf("%d",&a);
	printf("各位数之和为：%d\n",DigitSum(a));
	return 0;
}
