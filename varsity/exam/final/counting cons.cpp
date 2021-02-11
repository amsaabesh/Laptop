#include<stdio.h>
#include<string.h>
int main()
{
    int a,i=0,v=0,d=0;
    char c[10005];
    gets(c);
    a=strlen(c);
    while(i<a){
            if((c[i]>64&&c[i]<91)||(c[i]>96&&c[i]<123)){
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
    default:
        d++;
        }
        }
        i++;
    }
    printf("%d consonants in %s",d,c);
    return 0;
}
