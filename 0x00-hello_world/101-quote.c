#include <stdio.h>
#include <unistd.>
/**
 * main - program task8
 * Return: 1 (Sucess)
 */
int main(void)
{
char senten[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, senten, 59);
return (1);
}
