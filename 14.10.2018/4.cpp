/*4. �������� ��������� ��������� � ������� ����� ��������� ��������� ����
�� 72 ���� �� 27(�� ������).*/

#include <iostream>
using namespace std;
int main() {
	int n, s = 0;
	cin >> n;

	int*m = new int[n];
	cin>> m[0]
	for (int i = 1; i < n; i++) {
		cin >> m[i];
		if (((m[i] % 27 == 0) || (m[i] % 72 == 0)) && !((m[i] % 216 == 0))) {
			s += m[i];
		}
	}
	cout << s;
	return 0;
}