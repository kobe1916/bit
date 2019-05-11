#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("********************\n");
	printf("***    1.PLAY    ***\n");
	printf("***    0.EXIT    ***\n");
	printf("********************\n");
	
}

void game()
{
	//char mine[Row][Col];//'0'
	char mine[Rows][Cols];//'0'   边界也是要有的  只是不展示出来！
	char show_mine[Rows][Cols];//'*'
	/*InitMine(mine,int Rows,int Cols,'0');
	InitMine(show_mine, int Rows, int Cols, '*');*/
	InitMine(mine,  Rows,  Cols, '0');
	InitMine(show_mine,  Rows,  Cols, '*');
	//Show(mine, Rows, Cols);
	Show(mine, Row, Col);
	Show(show_mine, Row, Col);
}

int main()
{
	int n = 0;
	
	do
	{
		printf("请输入你的选择：\n");
		menu();
		scanf("%d", &n);
		switch (n)
		{
		case 1:game(); break;
		case 0:printf("退出游戏！\n"); break;
		default:
			printf("输入错误，请重新输入。\n"); break;
		}
	} while (n);







	
	system("pause");
	return 0;
}

