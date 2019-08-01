#include <stdlib.h>
#include <stdio.h>
void res(char *str)
{
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
