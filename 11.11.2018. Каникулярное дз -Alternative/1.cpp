/*1) Ќапишите рекурсивную функцию, позвол€ющую вычисл€ть значение функции
Ёйлера.*/
#include <iostream> 
using namespace std;

int q(int n) {
	int g = n;
	for (int i = 2; i*i <= n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			g -= g / i;
		}
	if (n > 1)
		g -= g / n;
	return g;
}
int main() {
	int a;
	cin ї a;
	cout Ђ q(a) Ђ endl;
	system("pause");
	return 0;
}