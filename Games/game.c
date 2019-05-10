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

}
