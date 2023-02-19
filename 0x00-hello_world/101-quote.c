#include <unistd.h>
#define ERROR_MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
/**
 * main - Entry point of the program
 *
 * Return: Always 1 (error)
 */
int main(void)
{
ssize_t len = sizeof(ERROR_MESSAGE) - 1;
ssize_t written;
written = write(STDERR_FILENO, ERROR_MESSAGE, len);
if (written != len)
return (1);
return (1);
}
