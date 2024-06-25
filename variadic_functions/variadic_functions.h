#ifndef VARIADICFUNCTIONSH
#define VARIADICFUNCTIONSH
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 * struct print - THE PRINT
 * @type :The operatoors
 * @f The functions that associated with
 */
typedef struct print
{
	char *type;
	void (*f)(va_list ap);
} print_type;

#endif
