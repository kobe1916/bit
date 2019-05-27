//快速排序
#define N 10
int arr[N] = { 5,4,9,6,7,3,1,2,8,0 };

void quick_sort( int left, int right)
{
	int temp = arr[left];
	int i = left;
	int j = right;
	while (i != j)
	{
		//
		while (i <j && arr[j] >= temp)
		{
			j--;
		}
		//
		while(i < j && arr[i] <= temp)
		{
			i++;
		}
		//
		if (i < j)
		{
			int t = 0;
			t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
	}
	//
	arr[left] = arr[i];
	arr[i] = temp;


	//quick_sort(left, i-1 );    //
	//quick_sort( i+1 , right);    //
}
int main()
{
	int i = 0;
	/*for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}*/
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	quick_sort( left, right);
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return  0;
}
