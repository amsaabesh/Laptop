#include<iostream>
using namespace std;
class student{
public:
    int id;
    string name;
    void getdata()
    {
        cin>>id>>name;
    }
    void putdata()
    {
        cout<<id<<endl<<name<<endl;
    }
};
class marks:public student{
public:
    int m1,m2,m3;
    void getmarks()
    {
        cin>>m1>>m2>>m3;
    }
    void putmarks()
    {
        cout<<m1<<endl<<m2<<endl<<m3<<endl;
    }
};
class result:public marks{
public:
    int total;
    float ave;
    void show(){
    total=m1+m2+m3;
    ave=total/3;
    cout<<total<<endl<<ave;
    }
};
int main()
{
    result r;
    r.getdata();
    r.putdata();
    r.getmarks();
    r.putmarks();
    r.show();
    return 0;
}
