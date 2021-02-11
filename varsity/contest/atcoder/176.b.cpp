#include<stdio.h>
#include<string.h>
int main(){
char a[200100];
long long int i,j=0,k;
gets(a);
k=strlen(a);
for(i=0;i<k-1;i++){
    j+=a[i]-'0';}
if(j%9==0){
    printf("Yes\n");
}
else
    printf("No\n");
}
