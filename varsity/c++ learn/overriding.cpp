#include<iostream>
using namespace std;
class person{
public:
    void mafisir(){
    cout<<"this is 1"<<endl;
    }
};
class student:public person{
public:
    void mafisir(){
    cout<<"this is 2"<<endl;
    }
};
class aritro:public student{
public:
    void mafisir(){
    cout<<"this is 3"<<endl;
    }
};
int main(){
    person p;
    p.mafisir();
    student s;
    s.mafisir();
    aritro a;
    a.mafisir();
    return 0;
}
