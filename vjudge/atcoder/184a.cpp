#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a[2][2],b;
    int i=0,j=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    b=(a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
    printf("%lld",b);
}
