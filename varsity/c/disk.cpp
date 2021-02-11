#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    int l,i,j,p,sum=0;
    while(gets(c)){i++;
            sum=0;
    //scanf("%s",c);
        l=strlen(c);
        for(i=0;i<l;i++){
                if(c[i]=='a')
                    sum+=1;
                else if(c[i]=='b')
                    sum+=2;
                else if(c[i]=='c')
                    sum+=3;
                 else if(c[i]=='d')
                    sum+=4;
                 else if(c[i]=='e')
                    sum+=5;
                 else if(c[i]=='f')
                    sum+=6;
                 else if(c[i]=='g')
                    sum+=7;
                 else if(c[i]=='h')
                    sum+=8;
                 else if(c[i]=='i')
                    sum+=9;
                     else if(c[i]=='j')
                    sum+=10;
                     else if(c[i]=='k')
                    sum+=11;
                     else if(c[i]=='l')
                    sum+=12;
                     else if(c[i]=='m')
                    sum+=13;
                     else if(c[i]=='n')
                    sum+=14;
                     else if(c[i]=='o')
                    sum+=15;
                     else if(c[i]=='p')
                    sum+=16;
                     else if(c[i]=='q')
                    sum+=17;
                     else if(c[i]=='r')
                    sum+=18;
                     else if(c[i]=='s')
                    sum+=19;
                     else if(c[i]=='t')
                    sum+=20;
                     else if(c[i]=='u')
                    sum+=21;
                     else if(c[i]=='v')
                    sum+=22;
                     else if(c[i]=='w')
                    sum+=23;
                     else if(c[i]=='x')
                    sum+=24;
                     else if(c[i]=='y')
                    sum+=25;
                     else if(c[i]=='z')
                    sum+=26;
                     else if(c[i]=='A')
                    sum+=27;
                     else if(c[i]=='B')
                    sum+=28;
                     else if(c[i]=='C')
                    sum+=29;
                     else if(c[i]=='D')
                    sum+=30;
                     else if(c[i]=='E')
                    sum+=31;
                     else if(c[i]=='F')
                    sum+=32;
                     else if(c[i]=='G')
                    sum+=33;
                     else if(c[i]=='H')
                    sum+=34;
                     else if(c[i]=='I')
                    sum+=35;
                     else if(c[i]=='J')
                    sum+=36;
                     else if(c[i]=='K')
                    sum+=37;
                     else if(c[i]=='L')
                    sum+=38;
                     else if(c[i]=='M')
                    sum+=39;
                     else if(c[i]=='N')
                    sum+=40;
                     else if(c[i]=='O')
                    sum+=41;
                     else if(c[i]=='P')
                    sum+=42;
                     else if(c[i]=='Q')
                    sum+=43;
                     else if(c[i]=='R')
                    sum+=44;
                     else if(c[i]=='S')
                    sum+=45;
                     else if(c[i]=='T')
                    sum+=46;
                     else if(c[i]=='U')
                    sum+=47;
                     else if(c[i]=='V')
                    sum+=48;
                     else if(c[i]=='W')
                    sum+=49;
                     else if(c[i]=='X')
                    sum+=50;
                     else if(c[i]=='Y')
                    sum+=51;
                     else if(c[i]=='Z')
                    sum+=52;}
                    for(j=1;j<=sum;j++){
                        if(i%j==0)
                            p++;
                            }
                        if(p==2)
                            printf("It is a prime word\n");


    }
    return 0;
}
