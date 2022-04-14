#include "function_pointers.h"
#include <stdlib.h>
/*
  * print_name - Prints a name
  * @name: string
  * @f: function pointer
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
    if (f != NULL && name != NULL)
        f(name);
}
