#include <iostream>	
using namespace std;
//Определить номер последней по порядку строки, в которой содержится
//наименьшее количество попарно одинаковых символов.
const int n = 4;

int main()
{
	char b[n][n]{};
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> b[i][j];
		}
	}
	cout << endl;
	

	int minimum = INT_MAX, ans = 0;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		int m[128]={ 0 };
		for (int j = 0; j < n; j++)
		{
			m[b[i][j]]++;
			if (m[b[i][j]] == 2)
			{
				count++;
				m[b[i][j]] = 0;
			}
			
		}
		if (minimum >= count)
		{
			minimum = count;
			ans = i;
		}

		cout << endl;
	}
	cout << "string which have minimum duo the same symbols : " << ans + 1 << endl;

}


	