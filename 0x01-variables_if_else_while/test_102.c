#include <stdio.h>
/**
   *main - Starting point
   *Return: Always 0 (Success)
   */
int main(void)
{
	int first_digit, second_digit, third_digit, fourth_digit;

	for (first_digit = 1; first_digit <= 9; first_digit++)
	{
		for (second_digit = 0; second_digit <= 9; second_digit++)
		{
			for (third_digit = 0; third_digit <= 9; third_digit++)
			{
				for (fourth_digit = 0; fourth_digit <= 9; fourth_digit++)
				{
					if (first_digit != second_digit && first_digit != third_digit)
					{
						if (fourth_digit >= third_digit)
						{
							putchar(fourth_digit + '0');
							putchar(third_digit + '0');
							putchar(' ');
							putchar(second_digit + '0');
							putchar(first_digit + '0');
							if (!(first_digit == 9 && second_digit == 8 && third_digit == 9 && fourth_digit == 9))
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

