
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("********************\n");
	printf("***    1.PLAY    ***\n");
	printf("***    0.EXIT    ***\n");
	printf("********************\n");
	
}

int main()
{
	int n = 0;

	char mine[Row][Col];
	char show_mine[Rows][Cols];
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
