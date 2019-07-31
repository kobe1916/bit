//字符串逆序  abcdefg --> gfedcba
//reverse_string(char * string)
#include <stdio.h>
#include <stdlib.h>
 
void reverse_string(char * string)
{
    string++;
    if (*string!='\0')
    {
        reverse_string(string);
    }
    string--;
    printf("%c", *string);
}
 
int main()
{
    char *p = "abcdefghijk";
    reverse_string(p);
    system("pause");
    return 0;
}
//原理：递归实现
//从首字符地址开始   若不为0地址加一，知道找到'\0'结尾 
//此时地址减一，找到前一个字符开始打印
//该字符打印后返回上次调用 接着自减打印下一字符依次循环




//关于递归和迭代：https://www.cnblogs.com/zhizhan/p/4892886.html
