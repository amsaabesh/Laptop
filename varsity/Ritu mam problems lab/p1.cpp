#include<iostream>
using namespace std;
class b{
public:
    int aa;
    string bb;
    b(int x,string y){
        aa=x;
        bb=y;
        cout<<"In B Class"<<endl;
        cout<<aa<<" "<<bb<<endl;
    }
};
class a: public b{
public:
    int c;
    string d;
    a(int m,string n,int x, string y):b(x,y){
        c=m;
        d=n;
        cout<<"In A Class"<<endl;
        cout<<c<<" "<<d<<endl;
    }
};
int main(){
    a ob(2,"A",4,"d");
    return 0;
}
