#include <stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, i;
	printf("Введите A и B\nA=");
	scanf_s("%d", &a);
	printf("B=");
	scanf_s("%d", &b);
	while (a <= b)
	{
		for (int i = 1; i <= a; i++)
			printf("\n%d", a);
		a++;
	}
	return 0;
}
