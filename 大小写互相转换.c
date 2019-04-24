int main()
{
	int ch;			//根据ASCII码，大小写字母对应的数值  所以用int
	printf("请输入一个字符:\n");
	while ((ch = getchar()) != EOF)		//EOF--表示文件结束符（end of file）
	{
		if (ch >= 'a'&&ch <= 'z')		//小写转为大写
			printf("%c\n", ch - 32);
		else
			if (ch >= 'A'&&ch <= 'Z')	//大写转为小写
				printf("%c\n", ch + 32);
			else
				if (ch >= '0'&&ch <= '9')	//判断是否为数字
					;		//  ；空语句表述不输出
				else
					;
	}
	printf("\n");
	system("pause");
	return 0;
}
