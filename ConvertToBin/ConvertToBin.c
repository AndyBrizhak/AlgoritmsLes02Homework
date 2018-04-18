#include <stdio.h>
#include <math.h>
#include <locale.h>

// Брижак Андрей ДЗ по курсу Алгоритмы и структуры данных. Урок 2.
//1. Реализовать функцию перевода чисел из десятичной системы в двоичную, используя
//рекурсию.


void convertToBin(int n)
{
	if (n!=0)
	{
		convertToBin(n/2);
		printf("%d", n % 2);
		/*getch();*/

	}
}



int main(int argc, char * argv[])
{
	char *locale = setlocale(LC_ALL, "");
	int n;
	printf("Введите целое десятичное число для перевода в двоичный формат:");
	scanf("%d", &n);
	convertToBin(n);
	getch();

	return 0;
}