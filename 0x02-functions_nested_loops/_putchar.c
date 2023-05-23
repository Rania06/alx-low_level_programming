#include "main.h"
#include <unistd.h>
/**
* _putchar - a function in this project
*@c: the character
* Return: 1 (success)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
