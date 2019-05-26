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
