#include <stdio.h>
#include <math.h>
#include <locale.h>
// ������ ������ �� �� ����� ��������� � ��������� ������. ���� 2.
//2. ����������� ������� ���������� ����� a � ������� b :
//a.��� ��������.
//b.����������.
//c. *����������, ��������� �������� �������� �������.


int withoutrecursepower(int a, int b)
//a.��� ��������.
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
//b.����������.
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


int main(int argc, char * argv[])
{
	char *locale = setlocale(LC_ALL, "");

	int a, b, res;
	printf("������� ����� ���������� ����� ��� ���������� � �������: \n");
	scanf("%d", &a);
	printf("������� �������� �������(����� �����): \n");
	scanf("%d", &b);
	res = withoutrecursepower(a, b);
	printf("�������� ���������� � �������(��� ��������): %d\n", res);
	getch();
	res = simplerecursepower(a, b);
	printf("�������� ���������� � �������(�������  ��������): %d\n", res);
	getch();
	//

	return 0;
}