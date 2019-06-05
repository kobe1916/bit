//模拟实现strcpy(liangzhongfangfa )
//strcpy把含有'\0'结束符的字符串复制到另一个地址空间，返回值的类型为char*。
#include <assert.h>
//char* my_strcpy(char* dest, char* src)
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*src != '\0')     //找需要copy的部分
	{
		*dest = *src;    //copy
		dest++;          //地址移动进行下一个字符的copy
		src++;
	}
	*dest = *src;           //串尾加上'\0'
	return ret;
}





//改进：
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest = *src)
	{
		src++;
		dest++;
	}
	return ret;

}

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	printf("%s\n", my_strcpy(arr1, arr2));
	system("pause");
	return 0;
}
