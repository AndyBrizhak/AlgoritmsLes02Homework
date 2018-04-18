#include <stdio.h>
#include <math.h>
#include <locale.h>
// Брижак Андрей ДЗ по курсу Алгоритмы и структуры данных. Урок 2.
//2. Реализовать функцию возведения числа a в степень b :
//a.Без рекурсии.
//b.Рекурсивно.
//c. *Рекурсивно, используя свойство чётности степени.


int withoutrecursepower(int a, int b)
//a.Без рекурсии.
{
	int p = 1;
	while (b)
	{
		p = p * a;
		b--;
	}
	return p;
}

int simplerecursepower(int a, int b)
//b.Рекурсивно.
{
	int p = 1;
	if (b == 0) return 1;
	else if (b<0)
	{
		return simplerecursepower(1.0 / a, -b);
	}
	else
	{
		return a * simplerecursepower(a, b - 1);
	}
	return p;
}

//c. *Рекурсивно, используя свойство чётности степени.

int power(int x, int n)
{
	if (n == 0) return 1;
	if (n < 0) return power(1 / x, -n);
	if (n % 2) return x * power(x, n - 1);
	return power(x * x, n / 2);
}

int main(int argc, char * argv[])
{
	char *locale = setlocale(LC_ALL, "");

	int a, b, res;
	printf("Введите целое десятичное число для возведения в степень: \n");
	scanf("%d", &a);
	printf("Введите значение степени(целое число): \n");
	scanf("%d", &b);
	res = withoutrecursepower(a, b);
	printf("Резульат возведения в степень(без рекурсии): %d\n", res);
	getch();
	res = simplerecursepower(a, b);
	printf("Резульат возведения в степень(простая  рекурсия): %d\n", res);
	getch();
	res = power(a, b);
	printf("Резульат возведения в степень( рекурсия c использованием четности): %d\n", res);
	getch();

	return 0;
}