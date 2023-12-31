#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, int n);
char *_strncpy(char *dest, const char *src, int n);
int _strcmp(const char *s1, const char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);

#endif /* MAIN_H */
