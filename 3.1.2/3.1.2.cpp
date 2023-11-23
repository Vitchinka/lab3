#include <clocale> 
#include <iostream> 
#include <ctime> 
#include <time.h>//Вывести на экран все элементы, встречающиеся в последовательности
				//ровно один раз.
using namespace std;

enum choose { inicialization = 1, random = 6, keyboard = 3 };

int main()
{
	const int N = 10000;
	srand(time(0));
	const int n = 6;
	auto input =0;
	int b[n] = { 2,3,3,21,1,1 };
	cout << "Chose the method: Initialisation - "<< inicialization <<  " Random - " << random <<  " Input - " << keyboard << endl;
	cin >> input;

	switch((choose)input)
	{
		case inicialization:
		{
			for (int i = 0; i < n; i++)
			{
				cout << b[i] << " ";
			}
			cout << endl;
		}
		break;
		
		case random:
			{
				for (int i=0; i < n; i++)
				{
					b[i] = rand() % 100;
				}
				for (int i = 0; i < n; i++)
				{
					cout << b[i] << " ";
				}
				cout << endl;
				
			}
			break;
		case keyboard:
		{
			for (int i = 0; i < n; i++)
			{
				cin >> b[i];
			}
			cout << endl;
			break;
		}
		default:
			cerr << "We not have this method, please try again";
			return 0;
	}

	
	int m[N] = { 0 };
	for (int i = 0; i < n; i++)
	{
		m[b[i]]++;
		cout << m[b[i]] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (m[i] == 1)
			cout << i << " ";
	}
	return 0;
}


