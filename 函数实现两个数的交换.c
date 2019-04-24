//！！！传址调用（对操作数要进行修改时用）&传值调用（只是借用操作数的数值时使用）

//函数原则上不进行打印   只起函数对应的功能


//函数实现两个数的交换

int Swap(int* x, int* y)       //要对操作数进行修改所以应用指针变量！
{
	int t = 0;
	t = *x;         
	*x = *y;
	*y = t;
}
int main()
{
	int x = 5, y = 8;
	printf("交换前为%d,%d\n", x, y);
	Swap(& x,& y);            //用指针变量传址  “&”
	printf("交换后%d,%d\n", x, y);
	system("pause");
	return 0;

}
