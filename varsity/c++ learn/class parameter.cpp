#include<iostream>
using namespace std;
class student{
public:
    int id;
    double cg;
    string name[100], mail[100];
    void set(int w,double x,string y,string z){
    id=w;
    cg=x;
    name[100]=y;
    mail[100]=z;
        }
    void show(){
    cout<<"name: \a"<<name[100]<<endl;
    cout<<"id: \a"<<id<<endl;
    cout<<"CGPA: \a"<<cg<<endl;
    cout<<"mail:\a"<<mail[100]<<endl;
    }
};
int main()
{
    student a;
    a.set(235,3.00,"aabesh","mahiraabesh");
    a.show();
}
