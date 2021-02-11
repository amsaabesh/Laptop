#include <iostream>
using namespace std;
int main()
{
	int a,b,sum,t,i,j;
	string c;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>b;
		sum=0;
		cout<<"Case "<<i<<":"<<endl;
		for(j=0;j<b;j++) {
			cin>>c;
			if(c=="donate") {
				cin>>a;
				sum-=-a;
			}
			else{
				cout<<sum<<endl;;
			}
		}
	}
}
