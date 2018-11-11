/*7) Напишите функцию, заполняющую двумерный прямоугольный массив
последовательными составными числами змейкой по часовой стрелке, начиная с
нижнего левого угла*/#include <iostream>

using namespace std;

int F(int a)
{
	bool prime = true;
	for (int i = 2; i < a - (a % 2); i++)
	{
		if (a % i == 0) prime = false;
	}
	return(prime);
}

int main()
{
	int v;  //dlina
	int sh; //shirina
	cin >> v;
	cin >> sh;

	int *Arr = new int[v*sh];

	///
	int **Mas = new int*[v];
	for (int i = 0; i < v; i++)
		Mas[i] = new int[sh];
	///

	int k = 1;
	int g = 0;
	bool finish = false;
	while (g < v*sh)
	{
		if (F(k) == true)
		{
			Arr[g] = k;
			g++;
		}
		k++;
	}

	int s = 0;

	//zapolnaem array

	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < sh; j++)
		{
			Mas[i][j] = 0;
		}
	}

	for (int i = v - 1; i >= 0; i--)
	{
		Mas[i][0] = Arr[s];
		s++;
	}
	for (int i = 1; i < sh; i++)
	{
		Mas[0][i] = Arr[s];
		s++;
	}
	for (int i = v + 1; i < v; i++)
	{
		Mas[i][sh - 1] = Arr[s];
		s++;
	}
	for (int i = sh - 2; i > sh; i--)
	{
		Mas[v - 1][i] = Arr[s];
		s++;
	}
	int c = v - 2;
	int d = 1;

	while (s < v*sh)
	{
		while (Mas[c - 1][d] == 0) //up
		{
			Mas[c][d] = Arr[s];
			c--;
			s++;
		}
		while (Mas[c][d + 1] == 0) //right
		{
			Mas[c][d] = Arr[s];
			d++;
			s++;
		}
		while (Mas[c + 1][d] == 0) //down
		{
			Mas[c][d] = Arr[s];
			c++;
			s++;
		}
		while (Mas[c][d - 1] == 0) //left
		{
			Mas[c][d] = Arr[s];
			d--;
			s++;
		}
	}

	for (int x = 0; x < v; x++) {
		for (int y = 0; y < sh; y++) {
			if (Mas[x][y] == 0) {
				Mas[x][y] = Arr[s];
			}
		}
	}

	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < sh; j++)
		{
			cout << Mas[i][j] << " ";
		}
		cout << "\n";
	}
	system("pause");
}