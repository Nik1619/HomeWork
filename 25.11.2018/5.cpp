/*Напишите эффективную процедуру, выписывающую из массива длины n все элементы,
у которых произведение ненулевых цифр больше k. В комментариях напишите,
почему перебор - эффективный
*/
#include <iostream>
#include <stdio.h>
using namespace std;
void mass(int mass[], int n, int k)
{
	int q = k;
	int b, ok;
	for (int i = 0; i < n; i++)
	{
		b = 1;
		ok = mass[i];
		while (ok)
		{
			if (ok % 10)
				b *= ok % 10;
			ok = (int)(ok / 10);
		}
		if (b > q)
			printf("%d\n", mass[i]);
	}
}
int main()
{
	int n;
	int k;
	printf("enter size of mass\n");
	scanf("%d", &n);
	printf("enter k\n");
	scanf("%d", &k);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
	mass(a, n, k);
	return 0;
}