#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

InitMine(char a[Rows][Cols], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			a[i][j] = set;
	}
}

Show(char a[Rows][Cols], int rows, int cols)
{
	int i = 0;
	int j = 0;
	//for (i = 0; i < rows; i++)
	//{ 
	//	for (j = 0; j < cols; j++)
	//		printf("%s", a[i][j]);
	//}
	for (i = 0; i <=cols; i++)	//打印列标0 1 2 3 4 5 6 7 8 9 
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i<= rows; i++)	//i控制行j控制列，进入每一行时循环列（从0到9）
	{							//，所以在打印数组元素前可先打印行标

		printf("%d ", i);		//打印行标     0与上边列标共用
		for (j = 1; j <= cols; j++)
		{
			printf("%c ", a[i][j]);  
		}
		printf("\n");

	}
	

}
