#include<bits/stdc++.h>
using namespace std;
class shoaib{
public:
    int a;
    void in(){
    cin>>a;
    }
    void check(){
    if(a%2){
        cout<<"Odd"<<endl;
    }
    else
        cout<<"Even"<<endl;
    }
};
int main(){
shoaib aabesh;
aabesh.in();
aabesh.check();
return 0;
}
