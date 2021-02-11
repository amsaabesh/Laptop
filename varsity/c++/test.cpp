#include<bits/stdc++.h>
using namespace std;
int main(){
char a[10];
int j,k=0;
gets(a);
for(int i=0;i<10;i++){

    j=a[i]-'0';
    k+=j;
    printf("%d %d\n",j,k);
}

}
