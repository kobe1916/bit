//杨辉三角
#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
	int i;
	int j;
	int a[N][N];
	for (i = 0; i < N; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < N; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < (2 * N - 2 * i); j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}



1.
	#include<stdio.h>
void main()
{ int i,j,n=0,a[17][17]={0};
   while(n<1 || n>16)
   { printf("请输入杨辉三角形的行数:");
     scanf("%d",&n);
   }
   for(i=0;i<n;i++)
     a[i][0]=1;       /*第一列全置为一*/
   for(i=1;i<n;i++)
     for(j=1;j<=i;j++)
       a[i][j]=a[i-1][j-1]+a[i-1][j];/*每个数是上面两数之和*/
   for(i=0;i<n;i++)    /*输出杨辉三角*/
   { for(j=0;j<=i;j++)
       printf("%5d",a[i][j]);
     printf("\n");
   }
}

2.
	#include<stdio.h>
void main()
{ int i,j,n=0,a[17][17]={1};
   while(n<1 || n>16)
   { printf("请输入杨辉三角形的行数:");
     scanf("%d",&n);
   }
   for(i=1;i<n;i++)
   { a[i][0]=1;              /*第一列全置为一*/
     for(j=1;j<=i;j++)
       a[i][j]=a[i-1][j-1]+a[i-1][j];   /*每个数是上面两数之和*/
   }
     for(i=0;i<n;i++)            /*输出杨辉三角*/
     { for(j=0;j<=i;j++)
         printf("%5d",a[i][j]);
       printf("\n");
     }
} 
//把第一列置为1的命令移到下面的双重循环中，减少了一个循环。注意初始化数组的变化

3.
#include<stdio.h>
void main()
{ int i,j,n=0,a[17][17]={0,1};
   while(n<1 || n>16)
   { printf("请输入杨辉三角形的行数:");
     scanf("%d",&n);
   }
   for(i=1;i<=n;i++)
   for(j=1;j<=i;j++)
     a[i][j]=a[i-1][j-1]+a[i-1][j];   /*每个数是上面两数之和*/
   for(i=1;i<=n;i++)           /*输出杨辉三角*/
   { for(j=1;j<=i;j++) printf("%5d",a[i][j]);
      printf("\n");
   }
}
//把第一列置为1的命令去掉了，注意初始化数组的变化

4.
#include<stdio.h>
void main()
{ int i,j,n=0,a[17][17]={0,1};
   while(n<1 || n>16)
   { printf("请输入杨辉三角形的行数:");
     scanf("%d",&n);
   }
   for(i=1;i<=n;i++)
   { for(j=1;j<=i;j++)
     { a[i][j]=a[i-1][j-1]+a[i-1][j];   /*每个数是上面两数之和*/
       printf("%5d",a[i][j]);    /*输出杨辉三角*/
     }
     printf("\n");
   }
}
//将计算和打印合并到一个双重循环中

5.
#include<stdio.h>
void main()
{ int i,j,n=0,a[17]={1},b[17];
   while(n<1 || n>16)
   { printf("请输入杨辉三角形的行数:");
     scanf("%d",&n);
   }
   for(i=0;i<n;i++)
   { b[0]=a[0];
     for(j=1;j<=i;j++)
        b[j]=a[j-1]+a[j];   /*每个数是上面两数之和*/
     for(j=0;j<=i;j++)            /*输出杨辉三角*/
     { a[j]=b[j];   /*把算得的新行赋给a,用于打印和下一次计算*/
       printf("%5d",a[j]);
     }
     printf("\n");
   }
}
//解法一到四都用了二维数组，占用的空间较多，而解法五只使用了两个一维数组。

6.
#include<stdio.h>
void main()
{ int i,j,n=0,a[17]={0,1},l,r;
   while(n<1 || n>16)
   { printf("请输入杨辉三角形的行数:");
     scanf("%d",&n);
   }
   for(i=1;i<=n;i++)
   { l=0;
     for(j=1;j<=i;j++)
     { r=a[j];
       a[j]=l+r;   /*每个数是上面两数之和*/
       l=r;
       printf("%5d",a[j]);   /*输出杨辉三角*/
     }
     printf("\n");
   }
}
//解法六只使用了一个一维数组和两个临时变量，最为简洁。






























