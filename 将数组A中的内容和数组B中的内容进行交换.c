#include <stdio.h>

void swap(int arr1[], int arr2[], int leng)
{
	int i = 0;
	for (i = 0; i < leng; i++)
	{
		int t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;
	}
}


int main()
{
	int i = 0;
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 5,4,3,2,1 };
	swap(arr1, arr2, sizeof(arr1) / sizeof(arr1[0]));     //数组1，数组2，数组长度=数组大小/数组中一个元素的大小
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}


/*
#include<stdio.h>
void swap(int arr1[], int arr2[], int leng)
{
	int i = 0;
	for (i = 0; i < leng; i++)
	{
		int t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;
	}
}

int main()
{
	int i;
	int arr1[5];
	int arr2[5];
	printf("请输入数组1：");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("请输入数组2：");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		scanf("%d", &arr2[i]);
	}
	swap(arr1, arr2, sizeof(arr1) / sizeof(arr1[0]));
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	return 0;
}
*/
