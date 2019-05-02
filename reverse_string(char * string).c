#include <stdio.h>
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
