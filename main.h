#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/* main body*/
int _printf(const char *format, ...);
/*specifiers functions*/
int char_func(va_list sp);
int string_func(va_list sp);
int percent_func(va_list sp);
/*help functions*/
int _strlen(char *s);
#endif
