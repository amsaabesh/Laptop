#include<stdio.h>
#include<string.h>
int main()
{
    int b,c=0,i=0;
    char a[20];
    gets(a);
    strrev(a);
    b=strlen(a);
    while(i<b){
    if(a[i]!='0'&&a[i]!='1'&&a[i]!='2'&&a[i]!='3'&&a[i]!='4'&&a[i]!='5'&&a[i]!='6'&&a[i]!='7'&&a[i]!='8'&&a[i]!='9')
    c+=1;
    i++;
    }
    if(c==0){

    if(a[0]=='0'||a[0]=='2'||a[0]=='4'||a[0]=='6'||a[0]=='8'){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    }
    else
        printf("Error Input\n");
    return 0;
}
