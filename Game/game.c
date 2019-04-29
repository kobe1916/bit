#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"   //引头文件！！！
void Board(char a[Row][Col],int row ,int col)//棋盘的初始化(全部为' '）
{
	int i, j;
	for (i = 0;i < row; i++)
	{
		for (j = 0; j < col; j++)
			a[i][j] = ' ';
	}
}


void ShowBoard(char a[Row][Col],int row,int col)//打印棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", a[i][0], a[i][1], a[i][2]);
		//问题：数组只有三列按照上边来说需要11个位置
		//解决：只%c与数组相应位置对应，即
		if (i < row - 1)
			printf("---|---|---\n");
		//每一行其实由两部分组成“ %c |...”和“_ _ _|...”
	}

}
