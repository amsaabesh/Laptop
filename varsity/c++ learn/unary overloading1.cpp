#include<bits/stdc++.h>
using namespace std;
class unary{
public:
    int a,b,c;
    void xoss(){
    cin>>a>>b>>c;
    }
    void operator+(){
    a=++a;
    b=b++;
    c=c++;
    }
    void beshi_xoss(){
    cout<<a<<endl<<b<<endl<<c<<endl;
    }
};
int main(){
unary aabesh;
aabesh.xoss();
+aabesh;
aabesh.beshi_xoss();
}
