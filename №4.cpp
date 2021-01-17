// #include <stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float p, s;
	int k;
	printf("Введите P\nP=");
	scanf_s("%f", &p);
	s = 1000;
	k = 0;
	printf("Изначальная сумма вклада = 1000");
	do
	{
		s = s + (s * p / 100);
		k++;
	} while (s + (s * p / 100) <= 1100);
	printf("\nC данным процентом размер вклада привысит 1100 рублей через %d", k);
	printf(" месяц и итоговый размер вклада составит %f", s);
	return 0;
}
