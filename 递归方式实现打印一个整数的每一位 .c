
void print(x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	//printf("%d",x);
	printf("%d ", x % 10);

}


int main()
{
	int x;
	scanf("%d", &x);
	print(x);

	system("pause");
	return 0;
}
