// Нахождение максимальной суммы элементов массива не делящейся на 6
#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, sum = 0, n, mnm = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{                                        //this takes O(n) because this time is needed to complete n steps of a cycle, when each step takes the same static time.
		cin >> a;
		if((a % 6 != 0) && (b == 0)){
            mnm = a;
            b = 1;
		}
		sum = sum + a;
	}
	if((sum % 6 == 0) && (mnm == 0))
	{
		cout<<"n = 0, sum = 0";
		return 0;
	}
	if((sum % 6 == 0) && (mnm != 0))
	{
	    sum = sum - mnm;
		cout<<"n = "<<n - 1<<", sum = "<<sum;
		return 0;
	}
	if(a % 6 != 0)
	{
	cout<<"n = "<<n<<", sum = "<<sum;
	}
	return 0;
}
