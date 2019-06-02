unsigned int reverse_bit(unsigned int n)
{
	int i = 0;
	unsigned int sum = 0;
	for(i=0; i<32; i++)
	{
		sum <<= 1;//sum = sum<<1;
		sum |= ((n>>i)&1);
	}

	return sum;
}

int main()
{
	int num = 0;
	unsigned int ret = 0;
	scanf("%d", &num);//25
	ret = reverse_bit(num);
	printf("%u\n", ret);//%d---有符号的整数 %u----无符号的整数

	system("pause");
	return 0;
}
