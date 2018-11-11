/*3) Сверхпростым числом будем называть такое простое число, что его номер в
последовательности простых чисел – тоже прост. Напишите программу,
находящую k-ое сверхпростое число.*/
#include <iostream> 

using namespace std;

int main()
{
	int n, m = 0, k = 0, i = 0;
	cin>>n;
	while (m != n) {
		bool y = true;
		bool p = true;
		for (int j = 2; j < i; j++) {
			if (i%j == 0) {
				y = false;
				break;
			}
		}
		if (i < 2)y = false;
		if (y == true) {
			k++;
			for (int j = 2; j < k; j++) {
				if (k%j == 0) {
					p = false;
					break;
				}
			}
			if (k < 2)p = false;
			if (p == true)m++;
		}
		i++;
	}
	cout<<i - 1;
	return 0;
}