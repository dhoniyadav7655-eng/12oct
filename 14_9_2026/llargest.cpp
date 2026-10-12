#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {10, 25, 3},
        {45, 12, 8},
        {19, 50, 7}
    };

    int largest = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    cout << "Largest number = " << largest;

    return 0;
}
