#include <stdio.h>
/**
 * main -print the size of various types on the computer
 * Return returns the value 0 if exit properly, non zero otherwise 
 */
int main(void)
{
int a;
long long int c;
char d;
float f;
long int b;
printf("size of a char: 1 byte(s) \n", sizeof(d));
printf("size of an int: 4 byte(s) \n", sizeof(a));
printf("size of a long int: 8 byte(s) \n", sizeof(b));
printf("size of a long long int: 8 byte(s) \n", sizeof(c));
printf("size of a float: 4 byte(s) \n", sizeof(int));
return (0);
}
