#include <stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	printf("Введите A и B\nA=");
	scanf_s("%d", &a);
	printf("B=");
	scanf_s("%d", &b);
	while (a >= b)
		a = a - b;
	printf("Длина незанятой части=%d", a);
	return 0;
}

