#include<iostream>
using namespace std;
class test{
public:
    int a;
    void st(int a){
    a=a;
    }
    void eo(int h){
    a=h;
    if(a%2==0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
    };
};
int main(){
    int b;
    test c;
    cin>>b;
    c.st(b);
    c.eo(b);

}
