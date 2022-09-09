#include<stdio.h>
/**
  *main - Print out the combination of 4 digits.
  *
  *Return: Always 0 (success)
  *
  */
int main(void)
{
        int second_digit;
        int first_digit;
        int t;
        int o;

        for (second_digit = '0'; second_digit <= '9'; second_digit++) /*print first two digit combo*/
        {
                for (first_digit = '0'; first_digit <= '9'; first_digit++)
                {
                        for (t = second_digit; t <= '9'; t++) /*print second of pair*/
                        {
                                for (o = first_digit + 1; o <= '9'; o++)
                                {
                                        putchar(second_digit);
                                        putchar(first_digit);
                                        putchar(' ');
                                        putchar(t);
                                        putchar(o);

                                        if (!((second_digit == '9' && first_digit == '8') &&
                                              (t == '9' && o == '9')))
                                        {
                                                putchar(',');
                                                putchar(' ');
                                        }
                                }
                                o = '0';
                        }
                }
        }
        putchar('\n');

        return (0);
}

