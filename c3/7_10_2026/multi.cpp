#include <iostream>
using namespace std;

class a {
public:
    void show1() {
        cout << "show main character" << endl;
    }
};

class b {
public:
    void show2() {
        cout << "show Shampoo" << endl;
    }
};

class c : public a, public b {
public:
    void show3() {
        cout << "show Raja jika tut gya" << endl;
    }
};

int main() {
    c obj;

    obj.show1();
    obj.show2();
    obj.show3();
    return 0;
}
