#include <stdlib.h>
#include <stdio.h>
void res(char *str)
{
  /*
  先移动指针至'\0',然后从最后一个字母开始打印，打印一个字母指针前移一位
  */
  str++;
  if(*str != '\0')
  {
    res(str);
  }
  str--;
  printf("%c",*str);
}


int main()
{
  char *p = "adcdefgh";
  res(p);
  printf("\n");
  system("pause");
  return 0;
}
