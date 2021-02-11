#include<stdio.h>
int main()
{
    FILE *a;
    char b[40];
    a=fopen("aabesh.txt","a");
    while(gets(b)){
    fputs(b,a);
    fputs("\n",a);
    fclose(a);
    }
}
