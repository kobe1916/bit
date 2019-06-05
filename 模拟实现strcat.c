//模拟实现strcat
char* my_strcat(char* dest, char* src)
{
	char* ret = dest;
	//assert(*dest != NULL);
	//assert(*src != NULL);      断言“地址”不为空    不需要解引用

	assert(dest != NULL);
	assert(src != NULL);

	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest = *src)
	{
		dest++;
		src++;
	}

	return ret;

}

int main()
{
	char arr[20] = "hello ";

	my_strcat(arr, "world");
	printf("%s\n", arr);

	system("pause");
	return 0;
