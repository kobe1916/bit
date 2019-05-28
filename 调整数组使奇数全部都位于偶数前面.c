void Print(int* p, int right)
{
	int i = 0;
	for (i = 0; i <= right; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

void separate(int arr[], int left, int right)
{
	while (left <= right)
	{
		if (arr[left] % 2 == 1 && arr[right] % 2 == 0)
		{
			left++;
			right--;
		}
		else if (arr[left] % 2 == 1 && arr[right] % 2 == 1)
		{
			left++;
		}
		else if (arr[left] % 2 == 0 && arr[right] % 2 == 1)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
		else
		{
			right--;
		}
	}
}


int main()
{
	int arr[] = { 1,3,2,4,6,7,8,9,10,11 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;

	separate(arr, left, right);
	Print(arr, right);
	system("pause");
	return 0;
}




//调整数组使奇数全部都位于偶数前面
void Depart_Arry(int arr[], int size)
{
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		//从前到后找偶数
		while (left < right&&arr[left] % 2 != 0)
		{
			left++;
		}
		//从后到前找奇数
		while (left < right&&arr[right] % 2 == 0)
		{
			right--;
		}
		//交换
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

//打印数组
void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{

	int arr[] = { 2, 3, 4, 6, 5, 8, 7, 10, 9, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Depart_Arry(arr, size);
	Print(arr, size);
	system("pause");
	return 0;
}


