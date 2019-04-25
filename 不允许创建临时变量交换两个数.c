#include <stdio.h>

int main()
{
	int i = 0, j = 0;
	printf("请输入ij：");
	scanf("%d%d",&i,&j);
	i = i +j;       //i'=i+j
	j = i-j;        //j'=i'-j=i+j-j=i
	i = i-j;        //i'=i'-j'=i+j-i=j
	printf("交换后值为：%d  %d：",i,j);
	return 0;
	
}


//按位异或
int main()
{
	int a = 3;
	int b = 5;
	//011-b
	//101-a
	//110-

	printf("a = %d b =%d\n", a, b);

	a = a^b;//异或-按（二进制）位异或
	b = a^b;
	a = a^b;

	printf("a = %d b =%d\n", a, b);

	/*
	a = a+b;
	b = a-b;
	a = a-b;
	*/

	/*int tmp = 0;

	tmp = a;
	a = b;
	b = tmp;*/
	system("pause");
	return 0;
}
