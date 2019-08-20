#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void InitArry(int arr[], int size)
{

        //初始化
	//如果想把数组的每一个元素全部初始化为0，则可以采用memset函数初始化
	//memset(arr, 0, sizeof(arr[0]) * size);
	//如果是把数组的每一个元素初始化为其他数字，则采用for循环的方式
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}
 
void EmptyArry(int arr[], int size)
{
	memset(arr, 0, sizeof(arr[0]) * size);
}
 
void ReverseArry(int arr[], int size)
{
        //反转   创建临时变量，对换左右
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		//将数组中的首尾元素交换，直到left与right相等
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
 
void PrintArry(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
 
int main()
{
	int a[5];
	int _size = sizeof(a) / sizeof(a[0]);
	InitArry(a, _size);
	PrintArry(a, _size);
	//EmptyArry(a, _size);
	//PrintArry(a, _size);
	ReverseArry(a, _size);
	PrintArry(a, _size);
 
 
	system("pause");
	return 0;
}
