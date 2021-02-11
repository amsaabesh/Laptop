#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("aabesh.txt","r",stdin);
    freopen("shoaib.txt","w",stdout);
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3)
        printf("%d\n",a-b-c);
    return 0;
}
