#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    while(scanf("%s",a)!=EOF){
            char c[5]="Hajj",d[6]="Umrah";
        if(strcmp(a,'*')==0)
            break;
        else{
            if(strcmp(a,c)==0)
                printf(" Hajj-e-Akbar\n");
            else if(strcmp(a,d)==0)
                printf(" Hajj-e-Asghar\n");
        }
    }
    return 0;
}
