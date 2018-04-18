#include <stdio.h>
#include <math.h>
#include <locale.h>
// Брижак Андрей ДЗ по курсу Алгоритмы и структуры данных. Урок 2.
//2. Реализовать функцию возведения числа a в степень b :
//a.Без рекурсии.
//b.Рекурсивно.
//c. *Рекурсивно, используя свойство чётности степени.


long power(int a, int b)
{
	long p = 1;
	while (b)
	{
		p = p * a;
		b--;
	}
}



int main(int argc, char * argv[])
{
	char *locale = setlocale(LC_ALL, "");

	int a, b;
	long res;
	printf("Введите целое десятичное число для возведения в степень: ");
	scanf("%d\n", &a );
	printf("Введите значение степени(целое число: ");
	scanf("%d\n", &b);
	res = power(a, b);
	printf("Резульат возведения в степень: %l\n", res);
	getch();

	return 0;
}