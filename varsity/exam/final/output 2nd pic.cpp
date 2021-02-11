#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="BUBTCSE",ch;
    int i,j,l;
    l=strlen(str);
    for(i=l;i<l;i++)
    for(j=0;j<l-i;j++){
        ch=str[j];
        str[j]=str[j+1];
        str[j+1]=ch;
    }
    printf("%s",str);
}
