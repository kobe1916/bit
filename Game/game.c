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
	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//	printf(" %c | %c | %c \n", a[i][0], a[i][1], a[i][2]);
	//	//问题：数组只有三列按照上边来说需要11个位置
	//	//解决：只%c与数组相应位置对应，即
	//	if (i < row - 1)
	//		printf("---|---|---\n");
	//	//每一行其实由两部分组成“ %c |...”和“_ _ _|...”
	//}

	int i;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", a[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");

			}
		}
		printf("\n");
	}
}

void Player(char a[Row][Col],int row,int col)
{
	//int i=0, j=0;
	int x = 0;
	int y = 0;

	printf("玩家走>\n");
	
	while (1)//若输入不合法则循环输入直至输入正确
	{
		printf("请输入要走的坐标：");
		scanf("%d%d", &x, &y);
		if ((x <= row && x >= 1) && (y >= 1 && y <= col))
		{
			//先判断坐标是否合法，在判断是否为空，切记合法后直接赋值！(判断用==)
			if (a[x - 1][y - 1] == ' ')
			{
				a[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标被占用，请重新输入！\n");
		}
		else
			printf("坐标超界，请重新输入！\n");
		
	}
	//printf("玩家走(请输入要走的坐标)：");
	//scanf("%d%d", i,j);
	////判断坐标合法性     注意坐标的转换 人类视角与计算机视角
	//if ((0 <= i - 1 && i - 1 <= row) && (0 <= i - 1 && i - 1 <= col))
	//{
	//	a[i - 1][j - 1] = '*';
	//}
	//else
	//{
	//
	//	printf("坐标输入错误，请重新输入！");
	//}
	////判断坐标是否被占用

}

void Computer(char a[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	//x = rand() % 3;
	//y = rand() % 3;
	/*x = rand() % row;
	y = rand() % col;*/
	while (1)
	{
		x = rand() % row;
		y = rand() % col; 
		if (a[x][y] == ' ')
		{
			a[x][y] = '#';
			break;
		}
	}
	
}
