#include<iostream>
using namespace std;
class shape{
    public:
    virtual void calculateArea()=0;

};
class rectangle:public shape{
    public:
    void calculateArea() override{
        int length = 20,breadth = 10;
        cout<<"Area of rectangle is "<<rectangle*breadth<<endl;
    }
};
int main(){
    
}