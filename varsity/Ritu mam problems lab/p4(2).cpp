#include<iostream>
using namespace std;
class cricket{
public:
    int a;
    string b;
    cricket(int x, string y){
        a=x;
        b=y;
        cout<<"In cricket class"<<endl;
    }
};
class football:public cricket{
public:
    int c;
    string d;
    football(int m, string n,int x, string y):cricket(x,y){
        c=m;
        d=n;
        cout<<"In football class"<<endl;
    }
};
class badminton:public football{
public:
    int e;
    string f;
    badminton(int p, string q,int m, string n):football(m,n){
        e=p;
        f=q;
        cout<<"In football class"<<endl;
    }
};
int main()
{
    //cricket ob(1,"a");
    //football ob1(1,"a",2,"b");
    badminton ob2(1,"a",2,"b",3,"c");
    return 0;
}
