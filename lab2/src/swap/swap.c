#include "swap.h"

void Swap(char *left, char *right)
{
	// ваш код здесь
    char current;
    current = *left;

    *left = *right;
    *right = current;
}
