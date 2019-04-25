int is_leap_year(int y)			//函数只完成判断闰年的的功能
{
	if(((y%4==0)&&(y%100!=0))||(y%400==0))
		return 1;
	else
		return 0;
}


int main()
{
	int year=0;
	for(year=1000; year<=2000; year++)     //循环在主函数内，将每个值传入函数进行判断
	{
		if(is_leap_year(year))            //根据返回值判断若为闰年则打印，判断一次打印一次
		{
			printf("%d ", year);
      //若要计数，计数器位于此
		}
	}
	system("pause");
	return 0;
}
