#include <iostream>//3.1.1
#include <time.h>//Определите сумму элементов массива, расположенных между минимальным и максимальным значениями.Variant 3

using namespace std;

const int lenght = 8;

int main()
{
    int chose;
    cout << "Chose the method: Initialisation - 1 , Random - 2 , Input - 3" << endl;
    cin >> chose;
    int b[lenght] = { 3,2,5,7,9,1,78,4 };
    int sum = 0;

    switch (chose)
    {
        case 1:
        {
        }
    break;
        case 2:
        {
            srand(time(NULL));

            for (int i = 0; i < lenght; i++)
            {
                b[i] = rand() % 100;
            }
        }
    break;
        case 3:
        {
            cout << "Enter numbers: " << endl;

            for (int i = 0; i < lenght; i++)
            {
                cin >> b[i];
            }
        }
    break;
        default:
            cout << "Error";
            return 0;
        }

    int min = b[0];
    int max = b[0];
    int indexmin = 0;
    int indexmax = 0;

        for (int i = 0; i < lenght; i++)
        {
            if (min > b[i])
            {
                min = b[i];
                indexmin = i;
            }
        }

        for (int i = 0; i < lenght; i++)
        {
            if (max < b[i])
            {
                max = b[i];
                indexmax = i;
            }
        }

        for (int i = 0; i < lenght; i++)
        {
            cout << b[i] << " ";
        }

        if (abs(indexmin - indexmax) == 1)
        {
            cout << endl << "Sum = " << sum;
            return 0;
        }

        if (indexmin < indexmax)
        {
            for (int i = indexmin + 1; i < indexmax; i++)
            {
                sum += b[i];
            }
        }

        if (indexmin > indexmax)
        {
            for (int i = indexmax + 1; i < indexmin; i++)
            {
                sum += b[i];
            }
        }

    cout << endl << "Sum = " << sum;

}


