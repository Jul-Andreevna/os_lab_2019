#include "revert_string_copy.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RevertString(char *str)
{
	// your code here
    int size, i; //инициализируем переменную size - размер строки 
    char newStr[100]; //создаем новую строку, куда будем записывать исходную наоборот
    int j = 0;
    size = strlen(str);

    for (i=size - 1; i>=0; i--) //с помощью цикла переворачиваем исходную строку  
    {
        newStr[j] = str[i];
        j++;
    }
    strcpy(str,newStr); //копируем полученную строку в исходную
}

