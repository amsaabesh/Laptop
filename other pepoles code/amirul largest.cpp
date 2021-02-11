#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout<<(max(a,max(b,c))/min(a,min(b,c)))/2<<endl;
}

