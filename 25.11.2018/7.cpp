#include <iostream> 
#include <vector> 
#include <cmath> 
using namespace std;
int mass(int n) {
	int k = 0;
	while (n >= 3) {
		if (n % 3 == 2)k++;
		n /= 3;
	}
	if (n == 2)k++;
	return k;
}
int main()
{
	int n, k;
	cin >> n >> k;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (mass(arr[i]) < k)
			cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}
