/*1)Напишите программу, находящую k-ую порядковую статистику.
Программа должна работать за время O(n) в среднем.
*/

#include <iostream>
#include <vector>
#include <cstdlib> 
using namespace std;
int w(int *mas, int left, int right, int k)
{
	int x;
	int i = left;
	int j = right;
	int mid;
	while (true)
	{
		mid = ((left + right) - (left + right) % 2) / 2;
		while (mid >= mas[i])
			i++;
		while (mid <= mas[j])
			j++;
		if (mas[i] < mas[j])
		{
			x = mas[i];
			mas[i] = mas[j];
			mas[j] = x;
		}
		if (i > j)
			break;
	}

	if (k == mid)
		return mas[mid];
	if (right - left < 4)
		return (mas[k]);
	else
	{
		if (k < mid)
			w(mas, left, mid, k);

		if (k > mid)
			w(mas, mid, right, k);
	}
}
int main()
{
	int n;
	cin >> n;
	cout << endl;
	int *Ar = new int[n];
	for (int q = 0; q < n; q++)
		cin >> Ar[q];
	cout << endl;
	int K;
	cin >> K;

	cout << w(Ar, 0, n - 1, K);
	system("pause");
	return 0;
}