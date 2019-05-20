/*
关于字节序(大端法、小端法)的定义
《UNXI网络编程》定义：术语“小端”和“大端”表示多字节值的哪一端(小端或大端)存储在该值的起始地址。小端存在起始地址，即是小端字节序；大端存在起始地址，即是大端字节序。
 

也可以说： 
1.小端法(Little-Endian)就是低位字节排放在内存的低地址端即该值的起始地址，高位字节排放在内存的高地址端。 
2.大端法(Big-Endian)就是高位字节排放在内存的低地址端即该值的起始地址，低位字节排放在内存的高地址端。
*/
/*
大端字节序存储
把一个数的高位字节序的内容存储到低地址处
把低位字节序的内容存储到高地址

小端字节序存储
把一个数的高位字节序的内容存储到高地址处
把低位字节序的内容存储到低地址处
*/
int check_sys()
{
	int a = 1;
	char*p = (char *)&a;
	if(*p == 1)
		return 1;
	else
		return 0;
}

int check_sys()
{
	int a = 1;
	char*p = (char *)&a;
	return *p;
}

int check_sys()
{
	int a = 1;
	//返回1，表示小端
	//返回0，表示大端
	return *(char *)&a;
}

int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys();
	if(ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	//int a = 1;
	//char *p = (char*)&a;//int*

	//if(*p == 1)	
	//{
	//	printf("小端存储\n");
	//}
	//else
	//{
	//	printf("大端存储\n");
	//}
	//01 00 00 00
	//00 00 00 01
	system("pause");
	return 0;
}
