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
