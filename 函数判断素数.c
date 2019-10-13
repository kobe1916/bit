//函数判断素数

/*     
！！！！！有问题！！！！！！

int prime(int x)
{
	int i = 0;
	for (i = 2; i <= x; i++)
	{
		if (x%i == 0)
			return 0;
		else
			return 1;
	//以9为例，因为9/2！=0，直接就返回0，即判断为素数，这是错误的
	//同理其他奇数都不能整除2，都是直接返回0的       
	//一次判断直接返回，这样循环还有用吗？
	} 
	
}
int main()
{
	int x = 0;
	printf("请输入要判断的数：");
	scanf("%d", &x);

	int ret = prime(x);
	switch (ret)
	{
	case 0:printf("%d不是素数", x); break;
	case 1:printf("%d是素数", x); break;
	}
	system("pause");
	return 0;
}
*/
