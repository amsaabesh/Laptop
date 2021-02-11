#include<stdio.h>
#include<conio.h>
int main()
{
    double charge=8850,other,water,elect,total,ma,fupa,chachi,mama,w_ma,w_fupa,w_mama,w_chachi,wa_to;
    char month[16];
    printf("Enter this month name: \n");
    scanf("%s",month);
    printf("Enter water bill: ");
    scanf("%lf",&water);
    printf("\n");
    printf("Enter electricity bill: ");
    scanf("%lf",&elect);
    printf("\n");
    printf("Enter other charges: ");
    scanf("%lf",&other);
    printf("\n");
    total=charge+other;
    wa_to=water+elect;
    w_ma=wa_to/6.36;
    w_mama=wa_to/3.18;
    w_chachi=wa_to/4.66;
    w_fupa=((wa_to+500)/3.18);
    ma=(total/6)+w_ma;
    fupa=(total/3)+w_fupa;
    mama=(total/3)+w_mama;
    chachi=(total/6)+w_chachi;
    printf("Bill of %s\n________________\n\n",month);
    printf("Mamar bil: %.2lf\nFupar bill: %.2lf\nChachir bill: %.2lf\nAmader bill: %.2lf\n\a",mama,fupa,chachi,ma);
    getch();
    return 0;
}
