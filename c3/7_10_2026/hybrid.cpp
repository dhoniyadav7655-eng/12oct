#include <iostream>
using namespace std;

class vechile {
public:
    void travel() {
        cout << "WE WANT TO TRAVEL" << endl;
    }
};

class fare {
public:
    void sound() {
        cout << "soundbox" << endl;
    }
};

class car : public vechile {
public:
    void car_travel() {
        cout << "this is tetmosol" << endl;
    }
};

class bus : public vechile, public fare {
public:
    void bus_travel() {
        cout << "We are traveling" << endl;
    }
};

int main() {
    bus v;

    v.bus_travel();
    v.sound();
    v.travel();
    return 0;
}
