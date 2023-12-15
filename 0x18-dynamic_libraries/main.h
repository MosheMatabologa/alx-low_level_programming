#ifndef _MAIN_H__
#define _MAIN_H_

#include <stdio.h>
#include <string.h>

int my_strlen(char *s);
void my_puts(char *s);
char *my_strcpy(char *dest, char *src);
char *my_strchr(char *s, char c);

int int_putchar(char c);
int islower(int c);
int isalpha(int c);
int abs(int n);
int isupper(int c);
int isdigit(int c);
void puts(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
void char_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* _MAIN_H_ */
