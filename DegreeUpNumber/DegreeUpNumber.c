#include <stdio.h>
#include <math.h>
#include <locale.h>
// ������ ������ �� �� ����� ��������� � ��������� ������. ���� 2.
//2. ����������� ������� ���������� ����� a � ������� b :
//a.��� ��������.
//b.����������.
//c. *����������, ��������� �������� �������� �������.


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
	printf("������� ����� ���������� ����� ��� ���������� � �������: ");
	scanf("%d\n", &a );
	printf("������� �������� �������(����� �����: ");
	scanf("%d\n", &b);
	res = power(a, b);
	printf("�������� ���������� � �������: %l\n", res);
	getch();

	return 0;
}