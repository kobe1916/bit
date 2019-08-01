int main()
{
	int arr[] = {1,2,3,4,5,1,2,3,4};
	//int arr[] = {1,2,3,4,5,1,2,3,4,6};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = 0;
	

	for(i=0; i<sz; i++)
	{
		//arr[i]
		int j = 0;
		int count = 0;
		for(j=0; j<sz; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
			}
		}
		if(count == 1)
			break;
	}
	printf("%d\n", arr[i]);
	system("pause");
	return 0;
}

//思路：用数组中第一个元素与数组中每个元素依次比较，若相等次数加一，
//以此循环...利用计数器原理，筛选出次数为一的元素。
