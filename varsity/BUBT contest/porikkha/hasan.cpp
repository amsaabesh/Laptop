#include <iostream>
#include <conio.h>
#include<stdio.h>
#include<string.h>
#define nl endl;
using namespace std;
void srt(int *a,int i,int n)
{
    int j,tmp;
    tmp=a[i];
    j=i;
    j*=2;
    while (j <= n)
    {
        if (j < n && a[j+1] < a[j])
            j = j + 1;
        if (tmp < a[j])
            break;
        else if (tmp >= a[j])
        {
            a[j/2] = a[j];
            j = 2 * j;
        }
    }
    a[j/2] = tmp;
    return;
}
void build(int *a, int len)
{
    int i;
    for(i = len/2; i >= 1; i--)
    {
        srt(a,i,len);
    }
}
int main()
{
    int  a[200],n,i, x;
    char ch[100];
    cout<<"Enter Your Input In Character"<<nl;
    cin>>ch;
    int len=strlen(ch);
    for(int i=0;i<len;i++)
    {
        ch[i]=toupper(ch[i]);
        a[i+1]=ch[i]-0;

    }



    build(a, len);
    cout<<"Final Result: "<<nl;
    for (i = 1; i <= len; i++)
    {
        char p;

        p=a[i]+0;

        cout<<p;
    }
    cout<<nl;
    getch();
}
