/*方法1.采用循环移位，对需要旋转的k个字符按顺序进行旋转，
先将要旋转的一个字符保存起来，将后面的往前挪动一位，
再将保存起来的这个字符赋给最后一位，这样连续循环k次*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void left_remove(char *p, int n, int len)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        char tmp = p[0];
        for (j = 0; j < len; j++)
        {
            p[j] = p[j + 1];
        }
        p[len - 1] = tmp;
    }
}
int main()
{
    char arr[] = "abcdef";
    int n;
    int len = strlen(arr);
    printf("旋转前：%s\n", arr);
    printf("旋转几位:");
    scanf("%d", &n);
    while (n < 1 || n > len - 1)//对于输入旋转字符数的临界值判断，是否超过字符串长度
    {
        if (n == len)//旋转字符数为字符串长度时，旋转后的字符串与旋转前的字符串一致，所以可直接输出
        {
            printf("%s", arr);
            system("pause");
            return 0;
        }
        else
        {
            printf("输入错误\n");
            scanf("%d", &n);
        }
    }
    left_remove(arr, n, len);//函数用以完成旋转字符的功能
    printf("旋转后: %s\n", arr);
    system("pause");
    return 0;
}



/*方法2.三步旋转法，先将要旋转的k个字符串逆序，再将剩余的字符串逆序，
最后再对整个字符串逆序就得到了旋转k个字符后的字符串*/


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reserve(char *left, char *right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void left_remove(char *p, int n,int len)
{
    reserve(p, p + n - 1);
    reserve(p + n, p + len - 1);
    reserve(p, p + len - 1);
}

int main()
{
    char arr[] = "abcdef";
    int n;
    int len = strlen(arr);
    printf("旋转前：%s\n", arr);
    printf("旋转几位:");
    scanf("%d", &n);
    while (n < 1 || n > len - 1)//对于输入旋转字符数的临界值判断，是否超过字符串长度
    {
        if (n == len)//旋转字符数为字符串长度时，旋转后的字符串与旋转前的字符串一致，所以可直接输出
        {
            printf("%s\n", arr);
            system("pause");
            return 0;
        }
        else
        {
            printf("输入错误，请重新输入\n");
            scanf("%d", &n);
        }
    }
    left_remove(arr, n, len);//函数用以完成旋转字符的功能
    printf("旋转后：%s\n", arr);
    system("pause");
    return 0;
}



/*方法3.指针*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void left_remove(char arr[], int n)     //spin函数用以完成旋转字符的功能
{
    char arr1[5] = { 0 };
    char *mov1 = arr;        //创建两个指针都指向原字符数组的首地址
    char *mov2 = arr;
    char *res1 = arr1;       //同理创建两个指向接受旋转字符的数组的首地址
    char *res2 = arr1;
    while (n--)         //num为输入的旋转字符数，用以结束while循环
    {
        *res1++ = *mov2++;//从首地址依次将字符拷贝到接受字符数组当中，拷贝次数为输入的旋转字符数
    }
    while (*mov2)  //将拷贝完成最后一次字符后的字符串依次向前与空白替换，直到遇到原字符串的‘\0’时结束循环
    {
        *mov1++ = *mov2++;
    }
    while (*mov1)  //将存放旋转字符数组中的字符依次填充到向前与空格替换后剩余字符串的末尾处
    {
        *mov1++ = *res2++;
    }
    *mov1 = '\0';        //填充时指针遇到‘\0’时结束
}


int main()
{
    int n;
    char arr[] = "AABCD";
    int len = strlen(arr);
    printf("原字符串:%s\n", arr);
    printf("请输入旋转的字符数:");
    scanf("%d", &n);
    while (n < 1 || n > len - 1)     //对于输入旋转字符数的临界值的判断
    {
        if (n == 5)    //旋转字符数为5时，旋转后的字符串与旋转前的字符串一致，所以可直接输出
        {
            printf("%s\n", arr);
            system("pause");
            return 0;
        }
        else
        {
            printf("输入有误，重新输入!");
            scanf("%d", &n);
        }
    }
    left_remove(arr, n);
    printf("现字符串:%s\n", arr);
    system("pause");
    return 0;
}

