#include <stdio.h>

/**
  *print_digit - function to print number
  *@num: Input integer
  *
  *Return: No return value
  */
void print_digit(int num)
{
	if (num < 0)
	{
		putchar('-');
		num *= -1;
	}
	if (num /10)
		print_digit(num / 10);
	putchar((num % 10) + '0');
}
/**
  *print_d - function to print number
  *@num: Input integer
  *
  *Return: No return value
  */
void print_d(int num)
{
	int temp, i = 10, count = 1;
	if (num < 0)
	{
		putchar('-');
		num *= -1;
	}
	temp = num;
	while (temp / 10)
	{
		count *= 10;
		temp /= 10;
	}
	while (count > 0)
	{
		putchar(((num / count) % 10) + '0');
		count /= 10;
	}

}


/**
  *main - Starting point of the program to print the integer number using putchar
  *
  *Return: Always 0 if  success or 0 if not.
  */
int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("\nUsing print_digit\n");
	print_digit(num);
	printf("\nUsing print_d\n");
	print_d(num);

	return (0);
}
