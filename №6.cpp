#include <stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, n, k;
	printf("Введите N\nN=");
	scanf_s("%d", &n);
	a = 1;
	b = 1;
	k = 2;
	while (a != n)
	{
		a = a + b;
		b = a - b;
		k++;
	}
	printf("K=%d", k);
	return 0;
}
