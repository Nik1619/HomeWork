/*3)�������� ��������� ����������� ���������� ��������� �������������� ���� �������� �������.
��������, ���� (2,3) ����������� ������� [1,2,3,5,7,11,13,17],
� ���� (3,4) - ���. ����� �������, ��� ���������� �������� ����������� ��������� ������ �������*/
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