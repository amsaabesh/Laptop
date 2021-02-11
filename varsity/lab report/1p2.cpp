#include<stdio.h>
#include<string.h>
int main()
{
    int i,v=0,c=0,n=0,l;
    char a[100];
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        v+=1;
       else if(a[i]=='1'||a[i]=='2'||a[i]=='3'|a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='0')
        n+=1;
       else
        c+=1;
    }
    printf("Vowel = %d, Number = %d, Consonant = %d",v,n,c);
    return 0;
}
