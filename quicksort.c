//快速排序
#define N 10
int arr[N] = { 5,4,9,6,7,3,1,2,8,0 };

void quick_sort( int left, int right)
{
	if (left > right)	//判断条件很重要，要不然死循环！
		return;
	int temp = arr[left];  //用temp存基准数
	int i = left;
	int j = right;
	while (i != j)    //左找大，右找小，且右先找，相遇则交换。
	{
		//右先找！  右找小，找比基准数小的
		while (i <j && arr[j] >= temp)
		{
			j--;
		}
		//左找大，找比基准数大的
		while(i < j && arr[i] <= temp)
		{
			i++;
		}
		//交换左右所找到的数
		if (i < j)
		{
			int t = 0;
			t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
	}
	//左右相遇后，交换相遇数与基准数
	arr[left] = arr[i];
	arr[i] = temp;


	quick_sort(left, i-1 );      //递归排左，对基准数左边进行快速排序
	quick_sort( i+1 , right);    //递归排右，对基准数右边进行快速排序
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

