#include<bits/stdc++.h>
using namespace std;
class coordinate{
    public:
    int x,y,z;
    void set(){
    x=5;
    y=10;
    z=20;
    }
    void show(){
    cout<<x<<' '<<y<<' '<<z<<endl;
    }
};
int main(){
    coordinate a1,a2;
    a1.set();
    a1.show();
    a2=a1;
    a2.show();
    return 0;
}
