/*3)Напишите программу позволяющую эффективно проверять принадлежность пары значений массиву.
Например, пара (2,3) принадлежит массиву [1,2,3,5,7,11,13,17],
а пара (3,4) - нет. Можно считать, что количество запросов многократно превышает размер массива*/
#include <iostream>
#include <vector>
#include <cstdlib> 
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr = new int[n];
    for(int i = 0; i < n; i++)
    cin >> n;
    int p,q; 
    int j = 0; 
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == p)
        j++;
        if(arr[i] == q)
        j++;
    }
    if(j => 2)
    cout << "ok";
    else
    cout << "no";
return 0;
}