#include<stdio.h>
#include<string.h>
int main()
{
    int len,a[26]={0},s=0;
    char b[105];
    scanf("%s",b);
    len=strlen(b);
    for(int i=0;i<len;i++){
        if(b[i]=='a')
            a[0]=1;
        else if(b[i]=='b')
            a[1]=1;
        else if(b[i]=='c')
            a[2]=1;
        else if(b[i]=='d')
            a[3]=1;
        else if(b[i]=='e')
            a[4]=1;
        else if(b[i]=='f')
            a[5]=1;
        else if(b[i]=='g')
            a[6]=1;
        else if(b[i]=='h')
            a[7]=1;
        else if(b[i]=='i')
            a[8]=1;
        else if(b[i]=='j')
            a[9]=1;
        else if(b[i]=='k')
            a[10]=1;
        else if(b[i]=='l')
            a[11]=1;
        else if(b[i]=='m')
            a[12]=1;
        else if(b[i]=='n')
            a[13]=1;
        else if(b[i]=='o')
            a[14]=1;
        else if(b[i]=='p')
            a[15]=1;
        else if(b[i]=='q')
            a[16]=1;
        else if(b[i]=='r')
            a[17]=1;
        else if(b[i]=='s')
            a[18]=1;
        else if(b[i]=='t')
            a[19]=1;
        else if(b[i]=='u')
            a[20]=1;
        else if(b[i]=='v')
            a[21]=1;
        else if(b[i]=='w')
            a[22]=1;
        else if(b[i]=='x')
            a[23]=1;
        else if(b[i]=='y')
            a[24]=1;
        else if(b[i]=='z')
            a[25]=1;

    }
    for(int j=0;j<26;j++){
        s+=a[j];
    }
    if(s%2)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}
