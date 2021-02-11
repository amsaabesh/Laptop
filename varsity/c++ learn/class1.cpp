#include<iostream>
using namespace std;
class student{
public:
    int id;
    string name;
    double cgpa;
    void seen(){
    cout<<"enter your id name & cgpa"<<endl;
    cin>>id>>name>>cgpa;
    }
    void shout(){
    cout<<"ID is :"<<id<<endl<<"Name is :"<<endl<<"Your cgpa is :"<<cgpa<<endl;
    }
};
int main(){
    student a,b,c;
    a.seen();
    a.shout();
    b.seen();
    b.shout();
    c.seen();
    c.shout();
    return 0;
}
