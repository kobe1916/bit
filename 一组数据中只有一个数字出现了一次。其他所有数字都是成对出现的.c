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
