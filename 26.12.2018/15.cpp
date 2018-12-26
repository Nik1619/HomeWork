/*Дано множество точек на плоскости. Напишите программу, находящую среди этих две, 
расстояние между которыми - наименьшее.
*/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
struct dot {
	double x;
	double y;
};
int main()
{
	int n;
	cin >> n;
	double min = 0;
	vector <dot> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i].x >> ar[i].y;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				double temp = sqrt(pow(ar[i].x - ar[j].x, 2) + pow(ar[i].y - ar[j].y, 2));
				if (min == 0)min = temp;
				else if (min > temp)min = temp;
			}
		}
	}
	cout << min;
	return 0;
}