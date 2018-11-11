//2) Напишите программу, вычисляющую сумму нечетных цифр целого числа.

#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int q, s;
	s = 0;
	while (a != 0) {
		q = a % 10;
		if (q % 2 == 1) {
			s = s + q;
		}
		a = a / 10;
	}
	cout << s;
	system("pause");
	return 0;
}