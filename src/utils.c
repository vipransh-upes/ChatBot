#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

void clrscr()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void remove_newline(char* str)
{
    size_t len = strlen(str);
    if(len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}