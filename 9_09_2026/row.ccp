#include <iostream>
using namespace std;

int main() {
    int arr[2][2] = {
        {23, 34},
        {34, 65}
    };

    for(int i = 0; i <= 1; i++) {
        int sum = 0;

        for(int j = 0; j <= 1; j++) {
            sum = sum + arr[i][j];
        }

        cout << "sum of row " << i << " = " << sum << endl;
    }

    return 0;
}