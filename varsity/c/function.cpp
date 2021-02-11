#include<stdio.h>
int main()
{
    int x=0;
    while(x<10){
    x+=(sizeof(char)/sizeof(char));
    printf("%d\n",x);
    }
}
