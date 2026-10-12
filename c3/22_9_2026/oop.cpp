#include<iostream>
using namespace std;

class student
{
    public:
    int n;
    string name;
    void display()
    {
        cout<<"Don'ttell me what to do";
    }
};
int main(){
    cout<<"Hello world"<<endl;
    student obj;
    obj.name="BCA";
    cout<<obj.name<<endl;
    obj.display();
        return 0;
} 