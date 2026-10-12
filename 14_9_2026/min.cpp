#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the number of row: ";
    cin >> a;

    cout << "Enter the number of column: ";
    cin >> b;

    int arr[a][b];

    cout << "Enter the element: ";

    for (int m = 0; m < a; m++)
    {
        for (int n = 0; n < b; n++)
        {
            cin >> arr[m][n];
        }
    }

    int min = arr[0][0];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    cout << "min number = " << min;

    return 0;
}