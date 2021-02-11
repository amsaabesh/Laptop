#include<iostream>
using namespace std;
class aritro{
public:
    int m, t;
    void s(){
    cout<<"this1";
    }
    void s(int x){
    cout<<"this2";
    }
    void s(int z,double y){
    cout<<"this3";
    }
};
int main()
{
    int x, y,z,v;
    double k;
    aritro a;
    cin>>x>>y>>z>>v>>k;
    a.s();
    a.s(x);
    a.s(y,k);
}
