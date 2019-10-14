#include "stdio.h"
int main()
{
    int a,x, y, z;
    printf("100到999之间的水仙花数有：\n");
    for (a=100;a<1000;a++)
    {
        x = a / 100; //x为百位上的数
        y = (a - x * 100) / 10; //y为十位上的数
        z = a - x * 100 - y * 10; //z为个位上的数
        if (a == x*x*x + y*y*y + z*z*z)
        {
            printf("%d\n", a);
        }
    }
    return 0;
}

int main()
{
	int x;
	int b, s, g;
	for (x = 100; x < 1000; x++)
	{
		b = x / 100;
		s = x / 10 % 10;
		g = x % 10;
		if ((b * b*b) + (s * s*s) + (g * g*g) == x)
			printf("%d ", x);
	}
	system("pause");
	return 0;
}

//判断水仙花数（3位）
int main()
{
	int x = 0;
	int b, s, g;
	printf("please input x:>");
	scanf("%d", &x);

	b = x / 100;
	s = x / 10 % 10;
	g = x % 10;
	if( (b * b*b) + (s * s*s) + (g * g*g)==x)
		printf("yes!");
	else
		printf("no!");

	system("pause");
	return 0;
}
