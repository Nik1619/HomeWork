/*Реализуйте вычисление значения полинома в точке посредством схемы Горнера
*/

#include <iostream>

using namespace std;

int main()
{
    int cv;
    cin >> cv;
    
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    int *y = new int[n];
    y[0] = a[n-1];
    for(int i = 1; i < n; i++)
    {
        y[i] = y[i-1]*cv + a[n-i-1];
    }
    cout << "P(x) = " << y[n-1];
    return 0;
}
