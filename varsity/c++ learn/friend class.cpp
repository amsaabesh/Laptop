#include<bits/stdc++.h>
using namespace std;
class a{
private:
    int e=2;
    double b=2.3;
    string c="aa";
    friend class d;
};
class d{
public:
    void in(a o){
    //cin>>o.e>>o.b>>o.c;
    }
    void show(a o){
    cout<<o.c<<o.b<<o.e;
    }
};
int main(){
a k;
d l;
l.show(k);
}
