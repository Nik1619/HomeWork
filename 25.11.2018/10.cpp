#include <iostream>
using namespace std;
int main()
{
	int n, s = 1;
	cout << "n= ";
	cin >> n;
	int *a = new int[n + 1];
	for (int i = 0; i < n + 1; i++)
		a[i] = i;
	for (int p = 2; p < n + 1; p++)
	{
		if (a[p] != 0)
		{
			s = a[p] * s;
			for (int j = p * p; j < n + 1; j += p)
				a[j] = 0;
		}
	}
	cout << s << endl;
	system("pause");
}
/*решенное через решето Эратосфена*/