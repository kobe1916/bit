
welcome to bit!!!!!
###################
w#################!
we###############!!
wel#############!!!
       ...
       ...
       ...
welcome to bit!!!!!

#include <string.h>
#include <windows.h>

int main()
{
	//定义两个数组，每次循环依次两边向中间各交换一个字符
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	
	int left = 0;
	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
	int right = strlen(arr1)-1;
	//
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);		//win单位毫秒  ，Linux单位秒
		system("cls");		//清屏
		left++;
		right--;
	}

	system("pause");
	return 0;
}
