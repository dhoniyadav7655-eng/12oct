#include<iostream>
using namespace std;
class a{
    public:
    void d1(){
        cout<<"This is class A "<<endl;
    }
};
class b{
    public:
    void d2(){
        cout<<"This is Class B"<<endl;
    }
};
class c{
    public:
    void d3(){
        cout<<"This is class C"<<endl;
    }
};
int main(){
    b b;
    c c;
    b.d2();
    return 0;
}