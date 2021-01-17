#include <stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, k, z;
	printf("Введите N\nN=");
	scanf_s("%d", &n);
	z = 1;
	k = 1;
	while (z <= n)
	{
		k++;
		z = z + k;
	}
	printf("K=%d", k);
	return 0;
}
