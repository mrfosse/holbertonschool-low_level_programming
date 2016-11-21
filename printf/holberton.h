#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	void (*f)();
} op_f;
int _putchar(car c);
int _printf(const char *format, ...);
#endif
