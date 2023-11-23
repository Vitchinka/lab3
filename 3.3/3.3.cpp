#include <iomanip>
#include <stdlib.h>    // rand  srand
#include <time.h>     // time
#include <iostream>    

using namespace std;

void main()
{
	const int N = 6;
	int a[N][N];

	srand(time(NULL));

	cout << " massiv a" << endl;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			a[i][j] = rand() % 10;
			cout << setw(3) << a[i][j]; 
		}
		cout << endl;
	}
	
	int sum = 0;
	bool n[N][N] = { 1 };

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			n[i][j] = 1;
		}

		for (int j = i; j < N; j++)
		{
			int g = 0;
			g = !(i <= j && i + j < N || i == j);
			if (g)
			{
				n[i][j] = 0;

			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (n[i][j])
			{
				sum += a[i][j];
			}	
		}
	}

	cout << "sum = " << sum << endl;


}