#ifndef _MAIN_H
#define _MAIN_H

/**
  *_putchar - print out a character ch
  *@ch: character argument.
  *
  *Return: 1 if successful and -1 if failure
  */
int _putchar(char ch);

/**
  *print_alphabet - print alphabet in lower case.
  *
  *Return: It will return nothing.
  */
void print_alphabet(void);

/**
  *print_alphabet_x10 - The function to print the whole alphabet 10 times.
  *
  *Rteurn: It will return nothing.
  */
void print_alphabet_x10(void);

/**
  *_islower - printing the whole alphabet 10 times.
  *@c: The argument to be passed.
  *
  *Return: 1 if the character is lower and 0 otherwise.
  */
int _islower(int c);

/**
  *_isalpha - a function to check if the giving character is an alphabet or not.
  *@c: The argument to be passed.
  *
  *Return: 1 if the arguement is an alphabet and 0 otherwise.
  */
int _isalpha(int c);

/**
  *print_sign - A program to check if the passed argument is negative,zero or positive.
  *@n: The argument to be passed.
  *
  *Return: 1 ifthe argument is positve,0 if it's zero and -1 if it's negative.
  */
int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);

#endif

