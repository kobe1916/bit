//通常讲：数组名是首元素的地址
	//但是有两个例外：
	//1. sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
	//2. &数组名，数组名表示整个数组，取出的是整个数组的地址
	//


int main()
{
	int arr[10] = {0};

	int sz = sizeof(arr)/sizeof(arr[0]);
	printf("%p\n", arr);//1-数组首元素的地址
	printf("%p\n", arr+1);//1-数组首元素的地址

	printf("%p\n", &arr[0]);//2-数组首元素的地址
	printf("%p\n", &arr[0]+1);//2-数组首元素的地址


	printf("%p\n", &arr);//3-数组的地址
	printf("%p\n", &arr+1);//3-数组的地址


	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr+0));//


	system("pause");
	return 0;
}
