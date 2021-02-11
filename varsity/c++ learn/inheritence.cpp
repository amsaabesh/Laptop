#include<bits/stdc++.h>
using namespace std;
class parent{
public:
    int id;
    string name;
};
class child:public parent{
public:
    string mail;
    double cgpa;
};
int main(){
    child aabesh;
    cin>>aabesh.id>>aabesh.name>>aabesh.mail>>aabesh.cgpa;
    cout<<aabesh.id<<endl<<aabesh.name<<endl<<aabesh.mail<<"@gmail.com"<<endl<<aabesh.cgpa;
}
