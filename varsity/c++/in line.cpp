#include<bits/stdc++.h>
using namespace std;
class a{
int a,b;
public:
    void set(int i, int j){a=1,b=j;}
    void s(){cout<<a<<b<<endl;}
};
class b{
int a,b;
public:
    void set(int i, int j){a=1,b=j;}
    void s(){cout<<a<<b<<endl;}
};
int main()
{
    a a1;
    b a2;
    a1.set(2,3);
    a2=a1;
}
