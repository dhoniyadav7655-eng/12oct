#include<iostream>
using namespace std;

class student{
    private:
    int marks;
    public:
    void dispaly(int n){
    marks=n;
    cout<<marks;
    }
};
int main()
{
    student obj;
    obj.dispaly(10);
    return 0;
}