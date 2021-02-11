#include<iostream>
using namespace std;
#include<string.h>
#include<windows.h>
class Banking
{
public:
    int id,balance=0,amount;
    string name;
    Banking()
    {
      system("cls");
      system("color b");
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your account id:"<<endl;
        cin>>id;
        cout<<"Please deposite minimum 2000 taka to confirm your account:"<<endl;
        cin>>amount;
        balance = amount;
        system("cls");
        cout<<"Your Information Added Successfully\n";
        cout<<"Thanks for creating your account\n";
    }
    void show_info()
    {
      system("cls");
      system("color 9");
        cout<<"Your account information-----"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"ID :"<<id<<endl;
    }
    void withdraw_info()
    {
      system("cls");
      system("color d");
        int i;
        cout<<"How many withdraw ?"<<endl;
        cin>>i;
        if(balance<i) cout<<"Not enough balance\n";
        else
        {
          balance = balance -i;
          cout<<"withdraw "<<i<<" Taka successful\n";
        }
        cout<<"Your current balance is: "<<balance<<endl;
    }
    void add_info()
    {
      system("cls");
      system("color 8");
        int i;
        cout<<"How many deposite ?"<<endl;
        cin>>i;
        balance = balance + i;
        cout<<"Your current balance is: "<<balance<<endl;
    }
};
int main()
{
    int people,i,j;
    system("color a");
    cout<<"--------------------------------\n";
    cout<<"This program is designed by Hasan Al Mahmud\n\n";
    cout<<"Create account for how many people ?\n";
    cin>>people;
    Banking A[people];
    system("color a");
    cout<<"\n\nFor which people ?\n";
    cin>>j;
    system("cls");
    system("color c");
    cout<<"Which option you want to open ?\n";
    cout<<"1. Show info\n2. Add deposite\n3. Withdraw amount\n4. Exit\n";
    cin>>i;

    switch(i)
    {
      case 1:
      {
        A[j-1].show_info();
        break;
      }
      case 2:
      {
        A[j-1].add_info();
        break;
      }
      case 3:
      {
        A[j-1].withdraw_info();
        break;
      }
      case 4:
          return 0;
      default:
      {
        cout<<"Given number is not correct.\n";
        return 0;
      }
    }
    return 0;
}
