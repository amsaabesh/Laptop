#include<stdio.h>
#include<string.h>
#include<stdlib.h>



//Global Variables

struct Renters
{
    char name[100];
    char phone[12];
    int apartmentNumber;
};

struct Bills
{
    double gas, water, electricity;
    int waste, gaurd, chef, caretaker, others;
};

typedef struct Renters Renters;
typedef struct Bills Bills;

Renters renters[100];          //This Building can accommodate at most 1000 Renters
Bills   bills[100][12];        //For each renters 12 month bill reports;

FILE *renter_file=NULL, *bill_file=NULL;  //data files



int Menue()
{
    system("cls");
    printf("1. Add new Renter\n");
    printf("2. Show all Renters\n");
    printf("3. Delete Renters\n");
    printf("4. Enter bills\n");
    printf("5. Show Reports\n");
    printf("6. Exit\n");
    printf("==========================\n");
    printf("Enter Your Choice (1-6): ");
    int choice;
    scanf("%d", &choice);
    return choice;
}


double total_bill(const Bills bills)
{
    double total=0;
    total+=bills.gas;
    total+=bills.water;
    total+=bills.electricity;
    total+=bills.waste;
    total+=bills.gaurd;
    total+=bills.chef;
    total+=bills.caretaker;
    total+=bills.others;
    return total;
}

void show_reports()
{
    int apartmentNumber, month;

    system("cls");
    printf("Enter the Apartment Number : ");
    scanf("%d", &apartmentNumber);
    printf("Enter the Month (1-12) : ");
    scanf("%d", &month);
    if(month>12||apartmentNumber>=100||apartmentNumber<0||month<1)
    {
        printf("Invalid apartmentNumber or month\n");
        system("pause");
        return;
    }
    month--;


    printf("Renter:\t %s\n", renters[apartmentNumber].name);
    printf("Phone: \t %s\n", renters[apartmentNumber].phone);
    printf("Apartment:\t %d\n", renters[apartmentNumber].apartmentNumber);
    printf("=================== Month %d ======================\n", month+1);
    printf("Gas Bill        : \t $%0.2lf\n", bills[apartmentNumber][month].gas);
    printf("Water Bill      : \t $%0.2lf\n", bills[apartmentNumber][month].water);
    printf("Electricity Bill: \t $%0.2lf\n", bills[apartmentNumber][month].electricity);
    printf("Waste Bill      : \t $%d.00 \n", bills[apartmentNumber][month].waste);
    printf("Guard Bill      : \t $%d.00 \n", bills[apartmentNumber][month].gaurd);
    printf("Chef Bill       : \t $%d.00 \n", bills[apartmentNumber][month].chef);
    printf("Caretaker Bill  : \t $%d.00 \n", bills[apartmentNumber][month].caretaker);
    printf("Others Bill     : \t $%d.00 \n", bills[apartmentNumber][month].others);
    printf("===================================================\n");
    printf("Total Bill      : \t $%0.2lf\n",total_bill(bills[apartmentNumber][month]));
    system("pause");
    return;
}

void enter_bills()
{
    system("cls");
    int apartmentNumber, month;
    printf("Enter the apartment number: ");
    scanf("%d", &apartmentNumber);
    printf("Enter the Month (1-12) : ");
    scanf("%d", &month);

    if(month>12||apartmentNumber>=100||apartmentNumber<0||month<1)
    {
        printf("Invalid apartment number or month\n");
        system("pause");
        return;
    }
    month--;
    printf("Enter the following bills for month %d : \n", month+1);
    printf("==================================\n");

    printf("Gas Bill        : \t");
    scanf("%lf", &bills[apartmentNumber][month].gas);

    printf("Water Bill      : \t");
    scanf("%lf", &bills[apartmentNumber][month].water);

    printf("Electricity Bill: \t");
    scanf("%lf", &bills[apartmentNumber][month].electricity);

    printf("Waste Bill      : \t");
    scanf("%d", &bills[apartmentNumber][month].waste);

    printf("Guard Bill      : \t");
    scanf("%d", &bills[apartmentNumber][month].gaurd);

    printf("Chef Bill       : \t");
    scanf("%d", &bills[apartmentNumber][month].chef);

    printf("Caretaker Bill  : \t");
    scanf("%d", &bills[apartmentNumber][month].caretaker );

    printf("Others Bill     : \t");
    scanf("%d", &bills[apartmentNumber][month].others);

    printf("==================================\n");
    printf("All bills are saved\n");
    system("pause");
    return;
}

void show_renters_info()
{
    system("cls");
    printf("Name                |Phone          |Apartment \n");
    printf("-----------------------------------------------\n");
    int i=0;
    for(i=0; i<100; i++)
    {
        if(renters[i].apartmentNumber!=-1)
        {
            printf("%20s ",renters[i].name);
            printf("%15s ",renters[i].phone);
            printf("%4d\n",renters[i].apartmentNumber);
        }
    }
    system("pause");
}

void delete_Renter()
{
    system("cls");
    int apartmentNumber, i;

    printf("Enter Apartment Number : ");
    scanf("%d", &apartmentNumber);
    if(apartmentNumber>=100||apartmentNumber<0)
    {
        printf("Invalid apartmentNumber\n");
        system("pause");
        return;
    }
    getchar();
    printf("Are you sure to Delete Renter at Apartment %d (Y/N)? :", apartmentNumber);
    char ch=getchar();

    if(ch=='Y'||ch=='y')
    {
        strcpy(renters[apartmentNumber].name, " ");
        strcpy(renters[apartmentNumber].phone, " ");
        renters[apartmentNumber].apartmentNumber=-1;

        for(i=0; i<12; i++)
        {
            bills[apartmentNumber][i].caretaker=0;
            bills[apartmentNumber][i].chef=0;
            bills[apartmentNumber][i].electricity=0;
            bills[apartmentNumber][i].gas=0;
            bills[apartmentNumber][i].gaurd=0;
            bills[apartmentNumber][i].others=0;
            bills[apartmentNumber][i].waste=0;
            bills[apartmentNumber][i].water=0;
        }

        printf("Deleted\n");
        system("pause");
        return;
    }
    return;
}

void readRenters()
{
    renter_file = fopen("Renter_info.bin","rb");
    if(renter_file==NULL) { printf("Renter_info.bin Not found\n"); exit(0); }
    int i=0;
    while(fread(&renters[i],sizeof(Renters),1,renter_file))
    {
        i++;
        if(i>=100)
            break;
    }
    for(i; i<100; i++)     //empty renters initialization
    {
        strcpy(renters[i].name, " ");
        strcpy(renters[i].phone, " ");
        renters[i].apartmentNumber=-1;
    }
    fclose(renter_file);
}

void readBills()
{
    bill_file = fopen("Bills.bin","rb");
    if(bill_file==NULL) { printf("Bills.bin Not found\n"); exit(0); }
    int i=0;
    int j=0;
    while(fread(&bills[i][j],sizeof(Bills),1,bill_file))
    {
        j++;
        if(j==12)
        {
            i++;
            j=0;
        }
        if(i>=100)
            break;
    }
    for(i; i<100; i++)     //empty renters initialization
    {
        for(j=0; j<12; j++)
        {
            bills[i][j].caretaker=0;
            bills[i][j].chef=0;
            bills[i][j].electricity=0;
            bills[i][j].gas=0;
            bills[i][j].gaurd=0;
            bills[i][j].others=0;
            bills[i][j].waste=0;
            bills[i][j].water=0;
        }
    }
    fclose(bill_file);
}

void writeRenters()
{
    renter_file = fopen("Renter_info.bin","wb");
    int i;
    for(i=0; i<100; i++)
    {
        fwrite(&renters[i],sizeof(Renters),1,renter_file);
    }
    fclose(renter_file);
}

void writeBills()
{
    bill_file = fopen("Bills.bin","wb");
    int i,j;
    for(i=0; i<100; i++)
    {
        for(j=0; j<12; j++)
        {
            fwrite(&bills[i][j],sizeof(Bills),1,bill_file);
        }
    }
    fclose(bill_file);
}

void addNewRenter()
{
    system("cls");

    int apartmentNumber,i;
    char name[100], phone[100];

    printf("Available apartment numbers: ");
    for(i=0; i<100; i++)
    {
        if(renters[i].apartmentNumber==-1)  printf("%d ", i);
    }
    printf("\nEnter your chosen apartment number: ");
    scanf("%d", &apartmentNumber);

    if(apartmentNumber>=100||apartmentNumber<0||renters[apartmentNumber].apartmentNumber!=-1)
    {
        printf("Invalid apartment number\n");
        system("pause");
        return;
    }
    gets(name);
    printf("\nEnter Renters Name: ");
    gets(name);
    printf("\nEnter Renters Phone Number: ");
    gets(phone);

    printf("Save informations (Y/N)? : ");
    char ch= getchar();

    if(ch=='Y'||ch=='y')
    {
        renters[apartmentNumber].apartmentNumber=apartmentNumber;
        strcpy(renters[apartmentNumber].name,name);
        strcpy(renters[apartmentNumber].phone,phone);
        printf("Saved\n");
        system("pause");
        return;
    }
    printf("Discarded\n");
    system("pause");
    return;
}



int main()
{
    int choice;

    system("cls");
    printf("\t\t Welcome to Bill Management System...\t\t\t\t\t\n");
    system("pause");

    readRenters();
    readBills();




    int running=1;
    while(running)                    //application loop
    {
        choice = Menue();
        switch(choice)
        {
        case 1:
            addNewRenter();
            break;
        case 2:
            show_renters_info();
            break;
        case 3:
            show_renters_info();
            delete_Renter();
            break;
        case 4:
            enter_bills();
            break;
        case 5:
            show_reports();
            break;
        case 6:
            writeBills();
            writeRenters();
            running=0;
            break;
        default :
            printf("Invalid Choice\n");
            system("pause");
            break;
        }

    }
    return 0;

}
