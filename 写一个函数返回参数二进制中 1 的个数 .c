//1.  模2除2的方法    （因为有负数所以unsigned)
#include<stdio.h>
int count_one_bits(unsigned int n)//看待-1是2^32-1
{
	int count = 0;//计数
	while (n!=0)//二进制数中必有1
	{
		if (n % 2 == 1)//二进制中发现1
		{
			count++;
		}
		n = n / 2;//去掉末尾的一个1
	}
	return count;
}
int main()
{
	int num = -1;//存的是补码,有符号
	//10000000 00000000 00000000 00000001---原码
	//11111111 11111111 11111111 11111110---反码
	//11111111 11111111 11111111 11111111---补码
	int ret = count_one_bits(num);
	printf("ret=%d\n", ret);
	system("pause");
	return 0;
}
