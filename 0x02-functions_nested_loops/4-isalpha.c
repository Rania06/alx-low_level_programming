#include "main.h"
/**
* _isalpha - task4 isalpha
* @c: the character
* Return: 1 (success) 0 not a letter
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
