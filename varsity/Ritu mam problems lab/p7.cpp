#include<iostream>
using namespace std;
class input{
public:
    int length,width;
    void getdata()
    {
        cin>>length>>width;
    }
    virtual void area()=0;
    virtual void perimeter()=0;
};
class square:public input{
    public:
    int a,p;
    void area(){
        a=length*width;
        cout<<a<<endl;
    }
    void perimeter(){
        p=4*length;
        cout<<p<<endl;
    }
};
class rectangle:public input{
    public:
    int a,p;
    void area(){
        a=length*width;
        cout<<a<<endl;
    }
    void perimeter(){
        p=2*(length+width);
        cout<<p<<endl;
    }
};
int main()
{
    square ob1;
    ob1.getdata();
    ob1.area();
    ob1.perimeter();
    rectangle ob2;
    ob2.getdata();
    ob2.area();
    ob2.perimeter();
    return 0;
}
