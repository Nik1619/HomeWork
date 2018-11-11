/*1) Ќапишите рекурсивную функцию, позвол€ющую вычисл€ть значение функции
Ёйлера.*/
#include <iostream> 
#include <cmath> 
using namespace std;
int fact(int x) {
	int s = 1, w = 0, z = 0, e = 1;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			w++;
		}//делители + их кол-во
	}
	int *a = new int[w];
	for (int i = 2; x > 1; x / i) {
		if (x % i == 0) {

			for (int j = 0; j < w; j++) {
				a[j] = i;//массив из делителей
			}
		}
		else {
			i++;
		}
	}

	for (int j = 0; j < w; j++) {

		if (a[j] = a[j + 1]) {
			while (a[j] = a[j + e]) {
				e++;
				z++;
			}
			s = s * (a[j] - 1)*pow(a[j], (z));
		}
		else {
			s = (a[j] - 1)*s;
		}
	}
	return s;
}
/*int fact(int n) {
	int result = n;
		for (int i = 2; i*i <= n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	fact(4);
	return result;
}*/
int main() {
	int a;
	cin >> a;
	cout << fact(a) << endl;
	system("pause");
	return 0;
}
