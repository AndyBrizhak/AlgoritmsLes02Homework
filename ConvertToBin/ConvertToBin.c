#include <stdio.h>
#include <math.h>
#include <locale.h>

// ������ ������ �� �� ����� ��������� � ��������� ������. ���� 2.
//1. ����������� ������� �������� ����� �� ���������� ������� � ��������, ���������
//��������.


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
	printf("������� ����� ���������� ����� ��� �������� � �������� ������:");
	scanf("%d", &n);
	convertToBin(n);
	getch();

	return 0;
}