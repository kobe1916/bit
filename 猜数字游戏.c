int main()
{
	int k = 75;
	int guess = 0;
	printf("请输入你猜的数：");
	while (guess != k)
	{
		scanf("%d", &guess);
		if (guess > k)
		{
			printf("猜大了\n");
			continue;             //用continue不用break  break跳出整个循环，而continue只是跳出当前循环进行下一次判断
		}

		else if (guess < k)
		{
			printf("猜小了\n");
			continue;
		}
		else
		{
			printf("猜对了！\n");
			continue;
		}
	}
	system("pause");

	return 0;
}

