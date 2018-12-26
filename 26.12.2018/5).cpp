/*Реализуйте решение непрерывной задачи о рюкзаке
*/
#include <iostream>
#include <vector>
using namespace std;
struct kek {
	int w;
	int c;
	double l;
}
int main()
{
	int N, W, mnum = 0;
	double max = 0;
	cin >> N >> W;
	vector <kek> ar(N);
	for (int i = 0; i < N; i++) {
		cin >> ar[i].w >> ar[i].c;
		ar[i].l = ar[i].c / ar[i].w;
		if (ar[i].l > max)max = ar[i].l;

	}
	cout << W * max;
	return 0;
}