//编写代码模拟三次密码输入的场景。
int main()
{
	//1.数字密码
	int key = 12345678;
	int input;
	int i;
	printf("请输入密码：");
	for (i = 1; i <= 3; i++)
	{
		scanf("%d", &input);
		if (input == key)
		{
			printf("密码正确！");
			break;
		}
		else
		{
			printf("密码错误\n");
			continue;
		}
	}
	system("pause");
	return 0;
}
