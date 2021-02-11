#include<stdio.h>
#include<conio.h>

struct info
{
    char name[50];
    char position[50];
    int member_no;
    int investment;
    float share;
    float profit;

};
int main()
{
    FILE *buscal;
    buscal=fopen("co-operative business cal.txt","a");
    int n;
    int i;
    int mn;
    int tital_invest=0;
    int member[10];
    float b[100];
    int shop_no;
    int shop_rent[1000];
    int c=0,d=0;
    char cost_name[100];
    char smn[200],c1;
    int cost_scope,cost_area,cost_amount[100];
    float profit_get[100];

    printf("\t WELCOME!!! CO-OPERATIVE BUSINESS MANAGEMENT SYSTEM (CBMS)\n\n\n");
    printf("\n\nEnter the shopping mall name: ");
    gets(smn);
    printf("\nEnter the month <1-12>: ");
    scanf("%d",&mn);
    if(mn<1||mn>12)
    {
        printf("please enter the valid month number!!!");

    }
    printf("\n\n\t\thow many member in this cooperation(in number):\t");
    scanf("%d",&n);
    struct info object[n];
    printf("\nenter the basic information:\n\n");
    for(i=0; i<n; i++)
    {
        object[i].member_no=i+1;
        printf("\t\tfor member no %d:\n\n",object[i].member_no);
        printf("\t\t                                   enter name :");
        scanf("%c",&c1);
        gets(object[i].name);
        printf("\t\t  enter position (president,member or secretary):");
        scanf("%s",object[i].position);
        printf("\t\t                  enter investment (in number):");
        scanf("%d",&object[i].investment);

        printf("\n");
    }

    printf("\t\thow many shop here:\t");
    scanf("%d",&shop_no);
    printf("\nenter the shop rent:\n\n");
    for(int i=0; i<shop_no; i++)
    {
        printf("\t\tshop no %d rent: ",i+1);
        scanf("%d",&shop_rent[i]);
    }
    for(int i=0; i<shop_no; i++)
    {
        c=c+shop_rent[i];
    }

    printf("\n\t\thow many kinds of utility bill you have to pay:\t");
    scanf("%d",&cost_area);
    printf("\nenter the amount of utility bill:\n\n");
    for(int i=0; i<cost_area; i++)
    {
        printf("\t\tutility bill no %d is: ",i+1);
        scanf("%d",&cost_amount[i]);
    }
    for(int i=0; i<cost_area; i++)
    {
        d=d+cost_amount[i];
    }

    fprintf(buscal,"\n__________________________________________________________________________________________________\n");
    fprintf(buscal,"%s\n",smn);
    fprintf(buscal,"__________________________________________________________________________________________________");
    fprintf(buscal,"\n\n\nTOTAL CALCULATION:");

    fprintf(buscal,"\n\t\ttotal invest   : ");
    for(i=0; i<n; i++)
    {
        tital_invest=tital_invest+object[i].investment;
    }
    fprintf(buscal,"%d",tital_invest);
    fprintf(buscal,"\n\t\ttotal income   : %d \n",c);
    fprintf(buscal,"\t\ttotal cost     : %d ",d);

    int profit=c-d;
    if(profit>0)
    {
        fprintf(buscal,"\n\t\ttotal profit   : %d\n",profit);
    }
    else if(profit==0)
    {
        fprintf(buscal,"\n\t\ttotal profit   : no profit\n");
    }

    else
    {
        fprintf(buscal,"\n\t\ttotal profit   : the business is in the LOSS\n");
    }




    for(int i=0; i<n; i++)
    {
        b[i]=(((float)object[i].investment*100)/tital_invest);

    }


    for(int i=0; i<n; i++)
    {
        profit_get[i]=(b[i]*profit)/100;
    }


    printf("\n\ndisplaying individual information\n\n\n");
    for(i=0; i<n; i++)
    {
        object[i].share=b[i];

    }
    for(i=0; i<n; i++)
    {

        object[i].profit=profit_get[i];


    }



    for(i=0; i<n; i++)
    {
        fprintf(buscal,"information for member no: %d\n\n",i+1);
        fprintf(buscal,"    name      : ");
        fprintf(buscal,"%s",object[i].name);
        fprintf(buscal,"    position  : ");
        fprintf(buscal,"%s",object[i].position);
        fprintf(buscal,"    investment: %d\n",object[i].investment);
        fprintf(buscal,"    share     : %.2f percent\n",object[i].share);
        fprintf(buscal,"    profit    : %.2f\n",object[i].profit);
        fprintf(buscal,"\n");
        if(i==n-1){
            fprintf(buscal,"\n\n");
        }

    }

    getch();

}
