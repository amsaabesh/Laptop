#include<iostream>
using namespace std;
class example{
public:
    virtual void try_()=0;
};
class output: public example{
    public:
    void try_(){
        cout<<"Written"<<endl;
    }
};
int main()
{
    output ob;
    ob.try_();
    return 0;
}
