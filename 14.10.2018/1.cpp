//1. Составные числа

#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a == 1)
		cout << "Unit\n";
	else {
		for (int i = 2; i < a; i++) {
			if (a%i == 0) {
				cout << "Compositen\n"; break;
			}
			else { cout << "Prime\n"; break; }

		}
	}

	system("pause");
	return 0;
}



