#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
struct str {
	char** n;
	int** m;
};
str solve(int n, int m, str temp, double pk) {
	int l, g;
	cout << "choose cell" << endl;
	cin >> l >> g;
	for (int i = 0; i < pk; i++) {
		bool flag = false;
		while (flag != true) {
			int nk, mk;
			nk = rand() % n;
			mk = rand() % m;
			if (temp.m[nk][mk] == 0 && (g != mk && l != nk)) {
				temp.m[nk][mk] = 1;
				flag = true;
			}
		}
	}
	int k = 0;
	for (int i = l - 1; i <= l + 1; i++) {
		for (int j = g - 1; j <= g + 1; j++) {
			if ((g != j || l != i) && temp.m[i][j] == 1)k++;
		}
	}
	temp.n[l][g] = 'O';
	if (k == 1)temp.n[l][g] = 'N';
	else if (k == 2)temp.n[l][g] = 'T';
	else if (k == 3)temp.n[l][g] = 'R';
	else if (k == 4)temp.n[l][g] = 'U';
	else if (k == 5)temp.n[l][g] = 'F';
	else if (k == 6)temp.n[l][g] = 'S';
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < m + 1; j++) {
			cout << temp.n[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	return temp;
}
str solve2(str temp, bool& boolean, int n, int m, double pk) {
	cout << "choose cell" << endl;
	int l, g;
	cin >> l >> g;
	if (temp.m[l][g] == 1) {
		cout << "You lose" << endl;
		boolean = false;
		return temp;
	}
	else {
		int u = 0;
		for (int i = l - 1; i <= l + 1; i++) {
			for (int j = g - 1; j <= g + 1; j++) {
				if ((g != j || l != i) && temp.m[i][j] == 1)u++;
			}
		}
		int f = 0;
		temp.n[l][g] = 'O';
		if (u == 1)temp.n[l][g] = 'N';
		else if (u == 2)temp.n[l][g] = 'T';
		else if (u == 3)temp.n[l][g] = 'R';
		else if (u == 4)temp.n[l][g] = 'U';
		else if (u == 5)temp.n[l][g] = 'F';
		else if (u == 6)temp.n[l][g] = 'S';
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (temp.n[i][j] != 'G')f++;
			}
		}
		if (n*m - f == pk) {
			cout << "You win";
			boolean = false;
			return temp;
		}
		if (boolean == true) {
			for (int i = 1; i < n + 1; i++) {
				for (int j = 1; j < m + 1; j++) {
					cout << temp.n[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			cout << endl;
			cout << endl;
			return temp;
		}
	}
}
int main()
{
	str temp;
	cout << "S=6 " << "F=5 " << "U=4 " << "R=3 " << "T=2 " << "N=1 " << "O=clear " << "M=mine " << "G=close" << endl;
	int n, m;
	cin >> n >> m;
	char** mass = new char*[n + 2];
	int** mass2 = new int*[n + 2];
	for (int i = 0; i < n + 2; i++) {
		mass[i] = new char[m + 2];
		mass2[i] = new int[m + 2];
	}
	temp.m = mass2;
	temp.n = mass;
	for (int i = 1; i < n + 2; i++) {
		for (int j = 1; j < m + 2; j++) {
			if ((i == 0 || i == n + 1) || (j == 0 || j == m + 1)) mass[i][j] = '!';
			mass[i][j] = 'G';
			mass2[i][j] = 0;
		}
	}
	bool boolean = true;
	double p, pk;
	cout << "choose variety" << endl;
	cin >> p;
	pk = n * m*p;
	solve(n, m, temp, pk);
	while (boolean == true) {
		solve2(temp, boolean, n + 2, m + 2, pk);
	}
	for (int i = 0; i < n + 2; i++) {
		for (int j = 0; j < m + 2; j++) {
			delete[] mass[i];
			delete[] mass2[i];
		}
	}
	delete[] mass;
	delete[] mass2;
	return 0;
}
