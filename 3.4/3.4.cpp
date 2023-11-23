#include <iostream>

using namespace std;

int main ()
{
	int n;
	cout << "input n =" << endl;
	cin >> n;
	int m[100][100] = { 0 };
	
	for (int i = 0; i< n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				m[i][j] = min(i + 1, n - i);
			}
			else if (i + j + 1 == n)
			{
				m[i][j] = min(i + 1, j + 1);
			}

			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}