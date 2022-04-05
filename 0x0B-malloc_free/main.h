#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H__

/**/

int _putchar(char c);

/*Write a function that creates an array of chars, and initializes it with a specific char.*/

char *create_array(unsigned int size, char c);

/*function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.*/

char *_strdup(char *str);

/*function that concatenates two strings*/

char *str_concat(char *s1, char *s2);

/* function that returns a pointer to a 2 dimensional array of integers.*/

int **alloc_grid(int width, int height);

/*function that frees a 2 dimensional grid previously created by your alloc_grid function.*/

void free_grid(int **grid, int height);

/*function that concatenates all the arguments of your program.*/

char *argstostr(int ac, char **av);

/* function that splits a string into words.*/

char **strtow(char *str);


#endif
