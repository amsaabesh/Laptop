#include<iostream>
using namespace std;
class cricket{
public:
    int a;
    string b;
    cricket(int x,string y){
        a=x;
        b=y;
        cout<<"In Cricket Class"<<endl;
    }
};
class football{
public:
    int c;
    string d;
    football(int m,string n){
        c=m;
        d=n;
        cout<<"In footbal Class"<<endl;
    }
};
class badminton:public cricket,public football{
public:
    int e;
    string f;
    badminton(int p,string q,int x,string y,int m,string n):cricket(x,y), football(m,n){
        e=p;
        f=q;
        cout<<"In badminton Class"<<endl;
    }
};
int main()
{
    badminton ob2(1,"c",2,"f",3,"b");
    return 0;
}
