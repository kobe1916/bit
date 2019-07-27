https://blog.csdn.net/qq_37941471/article/details/76552075
https://blog.csdn.net/chainsmoker_/article/details/80362777


//1.创建临时变量交换
#include <stdio.h>
void Swap1(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void Swap2(int *px,int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}
int main()
{
    int a = 15;
    int b = 20;
    Swap1(a,b);
    printf("Swap1: a= %d b= %d\n",a,b);
    Swap2(&a,&b);
    printf("Swap2: a= %d b= %d\n",a,b);
    return 0;
}



//2.异或
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    a = a^b;//异或，不同的为1
    //00001010  10 a
    //00010100 20 b
    //00011110 a
    //00001010 b 10
    //00010100 a 20
    b = a^b;
    a = a^b;
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    return 0;
}



//3.乘除法   加减法
