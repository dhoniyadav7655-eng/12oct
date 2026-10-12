#include <iostream>
using namespace std;

class vechile {
public:
    string brand = "BMW";

    void hunk() {
        cout << "Hello vechile";
    }
};

class car : public vechile {
public:
    string Model = "M5";
};

class cycle : public car {
public:
    void display() {
        cout << "This is cycle";
    }
};

class privatejet : public cycle {
public:
    void p() {
        cout << "This is private jet";
    }
};

int main() {
    privatejet c;

    c.display();
    c.p();

    return 0;
}

