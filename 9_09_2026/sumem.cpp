#include <iostream>
using namespace std;

int main() {
    int arr[2][2] = {
        {23, 34},
        {34, 65}
    }; 
    int sum=0;

    for(int i = 0; i <= 1; i++) {
         for(int j = 0; j <= 1; j++) {
            sum =  sum+ arr[i][j];
        }
    }
    cout << "sum of all element "<< " = " << sum << endl;

    return 0;
}