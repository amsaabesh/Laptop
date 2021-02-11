#include<stdio.h>
#include<string.h>
int main()
{
    int a,i=0,v=0;
    char c[10005];
    gets(c);
    a=strlen(c);
    while(i<a){
        switch(c[i]){
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        v++;
        break;
        }
        i++;
    }
    printf("%d vowel in %s",v,c);
    return 0;
}
