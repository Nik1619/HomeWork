#include<cstdlib>
#include <iostream>
#include <cmath> 
#include <ctime>
using namespace std;
srtuct temp{
int& ar;
char& arr;
bool& flag;
}
temp FirstStep(temp hhm, int n, int m, double p) {
	cout << "choose cell" << endl;
	int l, s;
	cin >> l >> s;
	l--;
	s--;
	for (int i = 0; i < p; i++) {
		int nk, mk;
		bool flag2 = true;
		while (flag2 == true) {
			srand(time(0) + 1);
			nk = rand() % 2;
			srand(time(0));
			mk = rand() & 2;
			if (nk == l && mk == s)flag2 = false;
			else hhm.ar[nk][mk] = 1;
		}
	}
	int k = 0;
	for (int i = l - 1; i <= l + 1; i++) {
		for (int j = s - 1; j <= s + 1; j++) {
			if (hhm.ar[i][j] == 1)k++;
		}
	}
	switch (k) {
	case 0:hhm.arr[l][s] = 'O';
	case 1:hhm.arr[l][s] = 'N';
	case 2:hhm.arr[l][s] = 'T';
	case 3:hhm.arr[l][s] = 'R';
	case 4:hhm.arr[l][s] = 'U';
	case 5:hhm.arr[l][s] = 'F';
	case 6:hhm.arr[l][s] = 'S';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	return hhm;
}
int main() {
	int n, m;
	double var, p;
	temp hhm;
	bool flag = true;
	cin >> n >> m;
	cout << "choose variety" << endl;
	cin >> var;
	p = n * m*var;
	int** ar = new int*[n];
	char** arr = new char*[n];
	for (int i = 0; i < n; i++) {
		ar[i] = new int[m];
		arr[i] = new char[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ar[i][j] = 0;
			arr[i][j] = 'H';
		}
		hhm.ar = ar;
		hhm.arr = arr;
		hhm.flag = flag;
	}
	FirstStep(hhm, n, m, p);
	system("pause");
}
