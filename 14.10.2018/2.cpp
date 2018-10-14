/* 2. Напишите программу находящую обратный по модулю элемент. Иначе говоря
по числам X и N нужно найти такое число Y, что остаток от деления X*Y на N
равняется единице.В программе гарантируется, что все числа - натуральные */

#include <iostream>
using namespace std;
int main() {
	int x, n, y;
	cin >> x;
	cin >> n;
	for (int i = 1; i < x; i++) {
		if ((n*i + 1) % x == 0) {
			y = (n*i + 1) / x;
			cout << "N = " << y << endl;
			return 0;
		}
	}
	cout << "None";

	system("pause");
	return 0;
}