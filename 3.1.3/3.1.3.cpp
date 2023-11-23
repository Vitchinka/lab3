#include <clocale> 
#include <iostream> 
#include <cmath> 
#include <ctime> 
#include <time.h>//Получить массив С(k), упорядоченный по возрастанию, путем слияния
                //массивов A(n) и B(m), упорядоченных при создании по возрастанию, где
                //k = n + m.

using namespace std;

enum work{inicialization = 1, random = 2, keyboard = 3};


int main()
{
    srand(time(0));
    const int n = 3;
    const int m = 5;
    int A[n] = { 3,6,7 };
    int B[m] = { 2,4,5,8,9 };
    int C[n + m];
    int input;

    cout << "Input method of create a massive:" << "inicialization -  " << inicialization << "random - " << random << "input" << keyboard << endl;
    cin >> input;
    switch (work(input))
    {
    case inicialization:
    {
        cout << "A: ";
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl << "B: ";
        for (int i = 0; i < m; i++)
        {
            cout << B[i] << " ";
        }
        cout << endl;
    }
        break;
    case random:
        for (int i = 0; i < n; i++)
        {
            A[i] = rand() % 100 + 1;
        }
        cout << "A: ";
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
        cout << "B: ";
        for (int i = 0; i < m; i++)
        {
            B[i] = rand() % 100 + 1;
        }
        for (int i = 0; i < m; i++)
        {
            cout << B[i] << " ";
        }
        cout << endl;
        break;
    case keyboard:
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> B[i];
        }
        break;
    default: cout << "error" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        C[i] = A[i];
    }
    for (int i = n; i < n + m; i++)
    {
        C[i] = B[i - n];
    }

    for (int i = 1; i < n + m; i++)
    {
        for (int j = n + m - 1; j >= i; j++)
        {
            if (C[j + 1] > C[j])
            {
                int x = C[j + 1];
                C[j + 1] = C[j];
                C[j] = x;
            }
        }
    }

    cout << "C: ";
    for (int i = 0; i < n + m; i++)
    {
        cout << C[i] << " ";
    }

}
