#include "main.h"
/**
 * main - check for lower case letter
 * @c : character to check the case
 * Return:0 or 1
 */
int _isalpha(int c)
{
return((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
