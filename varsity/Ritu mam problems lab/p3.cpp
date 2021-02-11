#include<iostream>
using namespace std;
class base{
public:
    void void_print(){
        cout<<"In base class"<<endl;
    }

};
class derived1:  public base{
public:
    void void_print(){
        cout<<"In base class"<<endl;
    }
};
class derived2:  public base{
public:
    void void_print(){
        cout<<"In base class"<<endl;
    }
};
int main()
{
    base ob;
    ob.void_print();
    derived1 ob1;
    ob1.void_print();
    derived2 ob2;
    ob2.void_print();
    return 0;
}
