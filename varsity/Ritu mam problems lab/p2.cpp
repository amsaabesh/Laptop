#include<iostream>
using namespace std;
class phone{
    public:
     virtual void callreceive()=0;
};
class landline:public phone{
public:
    void callreceive(){
        cout<<"Pick Receiver"<<endl;
    }
};
    class mobile: public phone{
    public:
        void callreceive(){
        cout<<"Press Receive Button"<<endl;
    }
};
int main()
{
    landline ob1;
    ob1.callreceive();
    mobile ob2;
    ob2.callreceive();
    return 0;
}
