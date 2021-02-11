#include<iostream>
using namespace std;
class info{
public:
    int id;
    void getid()
    {
        cin>>id;
        cout<<id<<endl;
    }
};
class info1{
public:
    int roll;
    void getroll()
    {
        cin>>roll;
        cout<<roll<<endl;
    }
};
class derive:public info,public info1{
public:
    void print(){
    getid();
    getroll();}
};
int main()
{
    derive d;
    d.print();
    return 0;
}
