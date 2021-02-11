#include<bits/stdc++.h>
using namespace std;
void mn(int *a,int i,int n)
{
    int j,t;
    t=a[i];
    j=2*i;
    while(j <= n)
    {
        if (j<n&&a[j+1]<a[j])
            j=j+1;
        if (t<a[j])
            break;
        else if (t>=a[j])
        {
            a[j/2]=a[j];
            j=2*j;
        }
    }
    a[j/2]=t;
    return;
}
void hihi(int *a, int len)
{
    int i;
    for(i = len/2; i >= 1; i--)
    {
        mn(a,i,len);
    }
}
int main()
{
    int  a[200],n,i, x;
    char ch[100];
    cout<<"ekti string input den(jekono input space chara)"<<endl;
    cin>>ch;
    int len=strlen(ch);
    for(int i=0;i<len;i++)
    {
        a[i+1]=ch[i]-0;

    }



    hihi(a, len);
    cout<<"Heap korar por ja ashche ta holo:"<<endl;
    for (i = 1; i <= len; i++)
    {
        char p;

        p=a[i]+0;

        cout<<p;
    }
    cout<<endl;
}
