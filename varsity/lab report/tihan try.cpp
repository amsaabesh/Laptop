#include<bits/stdc++.h>
using namespace std;
int main(){
    char txt[100],st[100];
    char r[1000];
    int n,i,l,k,j,m,t;
    gets(txt);
    cin>>n;
    gets(st);
    l=strlen(txt);
    m=strlen(st);
    for(i=0;i<n;i++){
        r[i]=txt[i];
    }
    for(j=0,k=i;j<m,k<n+m;j++,k++){
        r[k]=st[j];}
    for(t=k,i=n;i<l+m;i++,t++){
        r[t]=txt[i];
    }
    cout<<r<<endl;
    return 0;
}
