/*8) Ќапишите две функции(или метода):
- функци€, заполн€ющую карту размера MxN минами с заданной веро€тностью P.
 артой можно считать двумерный массив. ћиной можно считать значение У-1Ф
- функцию заполн€ющую карту значени€ми Ц количеством мин в соседних точках.*/
#include <iostream>

using namespace std;

int main()
{
	int P;
	cout << "VVedite chisla ot 1 do 100" << endl;
	cin >> P;
	int M;
	int N;
	cin >> N;
	cin >> M;
	int **Arr = new int*[M];
	for (int i = 0; i < M; i++)
		Arr[i] = new int[N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (rand() % 100 + 1 < P) Arr[j][i] = -1;
		}
	}
	//Nachinaem perebirat granici pola
	int s = 0;
	for (int i = 1; i < M - 1; i++)
	{
		if (!Arr[i][0] == -1)
		{
			s = 0;
			if (Arr[i - 1][0] == -1) s++;
			if (Arr[i + 1][0] == -1) s++;  //left
			if (Arr[i - 1][1] == -1) s++;
			if (Arr[i][1] == -1) s++;
			if (Arr[i + 1][1] == -1) s++;
			Arr[i][0] = s;
		}
	}

	for (int i = 1; i < M - 1; i++)
	{
		if (!Arr[i][N - 1] == -1)
		{
			s = 0;
			if (Arr[i - 1][N - 1] == -1) s++;
			if (Arr[i + 1][N - 1] == -1) s++;
			if (Arr[i - 1][N + 1] == -1) s++; //down
			if (Arr[i][N + 1] == -1) s++;
			if (Arr[i + 1][N + 1] == -1) s++;
			Arr[i][0] = s;
		}
	}

	for (int i = 1; i < N - 1; i++)
	{
		if (!Arr[M - 1][i] == -1)
		{
			s = 0;
			if (Arr[M - 1][i - 1] == -1) s++;
			if (Arr[M - 1][i + 1] == -1) s++;
			if (Arr[M - 2][i - 1] == -1) s++; //right
			if (Arr[M - 2][i] == -1) s++;
			if (Arr[M - 2][i + 1] == -1) s++;
			Arr[M - 1][i] = s;
		}
	}

	for (int i = 1; i < N - 1; i++)
	{
		if (!Arr[0][i] == -1)
		{
			s = 0;
			if (Arr[0][i - 1] == -1) s++;
			if (Arr[0][i + 1] == -1) s++;
			if (Arr[1][i - 1] == -1) s++; //left
			if (Arr[1][i] == -1) s++;
			if (Arr[1][i + 1] == -1) s++;
			Arr[0][i] = s;
		}
	}

	//proveriam ugl

	s = 0;
	if (!Arr[0][0] == -1)
	{
		if (Arr[1][0] == -1) s++;
		if (Arr[1][1] == -1) s++;
		if (Arr[1][0] == -1) s++;
		Arr[0][0] = s;
	}
	s = 0;
	if (!Arr[0][N - 1] == -1)
	{
		if (Arr[0][N - 2] == -1) s++;
		if (Arr[1][N - 2] == -1) s++;
		if (Arr[1][N - 1] == -1) s++;
		Arr[0][N - 1] = s;
	}
	s = 0;
	if (!Arr[M - 1][0] == -1)
	{
		if (Arr[M - 2][0] == -1) s++;
		if (Arr[M - 2][1] == -1) s++;
		if (Arr[M - 1][1] == -1) s++;
		Arr[M - 1][0] = s;
	}
	s = 0;
	if (!Arr[M - 1][N - 1] == -1)
	{
		if (Arr[M - 2][N - 1] == -1) s++;
		if (Arr[M - 2][N - 2] == -1) s++;
		if (Arr[M - 1][N - 2] == -1) s++;
		Arr[M - 1][N - 1] = s;
	}

	for (int i = 1; i < N - 1; i++)
	{
		for (int j = 1; j < M - 1; j++)
		{
			s = 0;
			if (!Arr[i][j] == -1)
			{
				if (Arr[i - 1][j - 1] == -1) s++;
				if (Arr[i][j - 1] == -1) s++;
				if (Arr[i + 1][j - 1] == -1) s++;

				if (Arr[i - 1][j] == -1) s++;
				if (Arr[i + 1][j] == -1) s++;

				if (Arr[i - 1][j + 1] == -1) s++;
				if (Arr[i][j + 1] == -1) s++;
				if (Arr[i + 1][j + 1] == -1) s++;

				Arr[i][j] = s;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << Arr[i][j];
		}
	}

	system("pause");
	return 0;
}