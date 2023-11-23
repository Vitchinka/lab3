#include <iostream>//3.1.1
#include <time.h>//Найти сумму чисел, расположенных между максимальным и минимальным по модулю элементами (не включая сами числа)

using namespace std;

const int lenght = 8;

int main()
{
    int chose;

    cout << "Chose the method. Initialisation - 1 , Random - 2 , Input - 3" << endl;
    cin >> chose;

    int mass[lenght] = { 5,1,99,3,8,3,90,80 };
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
                mass[i] = rand() % 100;
            }
        }
    break;
        case 3:
        {
            cout << "Enter numbers: " << endl;

            for (int i = 0; i < lenght; i++)
            {
                cin >> mass[i];
            }
        }
    break;
        default:
            cerr << "Error";
            return 0;
    }

    int min = mass[0];
    int max = mass[0];
    int indexmin = 0;
    int indexmax = 0;

        for (int i = 0; i < lenght; i++)
        {
            if (min > mass[i])
            {
                min = mass[i];
                indexmin = i;
            }

            if (max < mass[i])
            {
                max = mass[i];
                indexmax = i;
            }
            cout << mass[i] << " ";
        }

        if (abs(indexmin - indexmax) == 1)
        {
            cout << endl << "Sum = " << sum;
            return 0;
        }
        else if (indexmin < indexmax)
        {
            for (int i = indexmin + 1; i < indexmax; i++)
            {
                sum += mass[i];
            }
        }
        else if (indexmin > indexmax)
        {
            for (int i = indexmax + 1; i < indexmin; i++)
            {
                sum += mass[i];
            }
        }

    cout << endl << "Sum = " << sum;

      return 0;
}
