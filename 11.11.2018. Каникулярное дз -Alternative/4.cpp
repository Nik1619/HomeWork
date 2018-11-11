/*4) Напишите программу, определяющую количество нулей в числе N! Известно, что N
помещается в тип unsigned int.*/
#include <iostream>
using namespace std;
int main() {
	unsigned int n, s;
	cin >> n;
	s = 0;
	int a;
	while (n != 0) {
		a = n % 10;
		if (a == 0) {
			s = s + 1;
		}
		n = n / 10;
	}
	cout << s << '\n';
	system("pause");
	return 0;
}