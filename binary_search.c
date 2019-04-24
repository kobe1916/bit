#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int k, int sz)	//将数组 要查找的数  数组大小传入
{
	int left = 0;		//左右下标均在函数内定义（若指定位置查找
	int right = sz-1;
	while(left<=right)
	{
		int mid = left+(right-left)/2;      //定义中点  
		if(arr[mid] < k)       用中点下标对应的元素与k比较
		{
			left = mid+1;
		}
		else if(arr[mid] > k)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if(ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了, 下标是:%d\n", ret);
	}

	system("pause");
	return 0;
}





int binary_search(int arr[], int k, int left, int right)
{
	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid] < k)
		{
			left = mid+1;
		}
		else if(arr[mid] > k)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	//int ret = binary_search(arr, k, left, right);
	int ret = binary_search(arr, k, 2, 7);		//指定位查找
	if(ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了, 下标是:%d\n", ret);
	}

	system("pause");
	return 0;
}
