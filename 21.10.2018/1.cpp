#include <iostream> 
using namespace std;
struct rational {
	int n;
	int m;
};
rational operator~(rational x) {
	for (int i = 2; i < (x.m); i++) {
		if ((x.n%i == 0) && (x.m%i == 0)) {
			x.n = (x.n) / i;
			x.m = (x.m) / i;
		}
	}
	return x;
}
rational operator*(rational x, rational y) {
	x.n = x.n*y.n;
	x.m = x.m*y.m;
	return x;
}
rational operator/(rational x, rational y) {
	x.n = x.n*y.m;
	x.m = x.m*y.n;
	return x;
}
rational operator+(rational x, rational y) {
	if (x.m == y.m) {
		x.n = x.n + y.n;
		x.m = x.m;
	}
	else {
		x.n = (x.n*y.m) + (y.n*x.m);
		x.m = x.m*y.m;
	}
	return x;
}
rational operator-(rational x, rational y) {
	if (x.m == y.m) {
		x.n = x.n - y.n;
		x.m = x.m;
	}
	else {
		x.n = (x.n*y.m) - (y.n*x.m);
		x.m = x.m*y.m;
	}
	return x;
}
bool operator==(rational x, rational y) {
	if (x.m == y.m)return(x.n == y.n);
	else {
		x.n = x.n*y.m;
		x.m = x.m*y.m;
		y.n = y.n*x.m;
		y.m = y.m*x.m;
		return (x.n == y.n);
	}
}
bool operator>(rational x, rational y) {
	if (x.m == y.m)return(x.n > y.n);
	else {
		x.n = x.n*y.m;
		x.m = x.m*y.m;
		y.n = y.n*x.m;
		y.m = y.m*x.m;
		return (x.n > y.n);
	}
}
bool operator<(rational x, rational y) {
	if (x.m == y.m)
		return(x.n < y.n);
	else {
		x.n = x.n*int(y.m);
		x.m = x.m*y.m;
		y.n = y.n*int(x.m);
		y.m = y.m*x.m;
		return (x.n < y.n);
	}
}
void ans(rational z) {
	rational x = ~(z);
	cout << x.n << "/" << x.m << endl;
}
int main()
{
	rational Q;
	cin >> Q.n >> Q.m;
	ans(Q);
	system("pause");
	return 0;
}