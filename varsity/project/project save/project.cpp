#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char pasw[20],input_pass[20];
    printf("\t\tWelcome TO Apartment Bill\nIf you want to continue press 1, else anything\n");
    scanf("%d",&k);
    FILE *bill_save,*bill_collect,*pass;
    if(k==1){
    char A[2];
    printf("Enter your password:\n");
    pass=fopen("password.txt","r");
    scanf("%c",&A);
    gets(input_pass);
    while(!feof(pass)){
    fgets(pasw,20,pass);
    }
    fclose(pass);
    //password checking
    if(strcmp(pasw,input_pass)==0){
    printf("Wanna get bill?\nPress 1...\nWanna save charges?\nPress 2\nWanna change password?\nPress 3\nFor Exit\nPress 4\n");
    scanf("%d",&i);
    if(i==1){                           //bill making
        start:
        bill_save=fopen("Vara.txt","a");
        bill_collect=fopen("vara_save.txt","r");
        double other,water,elect,total,bill;
        char month[11],apar[250],c;
        int year,flat,gas,moyla,bua,night_guard,angina_porishkar,rasta_jharu,caretaker;
        fscanf(bill_collect,"%d%d%d%d%d%d%lf%d",&gas,&moyla,&bua,&night_guard,&angina_porishkar,&rasta_jharu,&other,&caretaker);
        printf("Enter apartment name with full address: ");
        scanf("%c",&c);
        gets(apar);
        strupr(apar);
        printf("\n");
        printf("Enter total flat number: ");
        scanf("%d",&flat);
        printf("\n");
        printf("Enter this month name: ");
        scanf("%s",month);
        strupr(month);
        printf("\n");
        printf("Enter year: ");
        scanf("%d",&year);
        printf("\n");
        printf("Enter water bill: ");
        scanf("%lf",&water);
        printf("\n");
        printf("Enter electricity bill: ");
        scanf("%lf",&elect);
        printf("\n");
        printf("Enter other charges: ");
        scanf("%lf",&other);
        printf("\n");
        total=(gas*flat)+(moyla*flat)+(bua*flat)+(night_guard*flat)+(angina_porishkar*flat)+(rasta_jharu*flat)+(caretaker*flat)+elect+water+other;
        bill=(total/(flat/1.0));
        if(other)
            fprintf(bill_save,"Welcome to %s\nHere is total %d flat(s)\nIn %s,%d\nGas bill = %d Taka only\nWater bill is = %.2lf Taka only\nElectric bill = %.2lf Taka only\nMoylar bill = %d Taka only\nBuar bill = %d Taka only\nNight guard's bill = %d Taka only\nRasta porishkarer bill = %d Taka only\nAngina porishkar = %d Taka only\nCaretaker's bill = %d Taka only\nOther charge = %.2lf Taka only\n____________________________\ntotal bill = %.2lf Taka only\nThanks Every one\n\n\n",apar, flat, month, year, gas, (water/flat), (elect/flat), moyla, bua, night_guard,rasta_jharu, angina_porishkar, caretaker, (other/flat), bill);
        else
            fprintf(bill_save,"Welcome to %s\nHere is total %d flat(s)\nIn %s,%d\nGas bill = %d Taka only\nWater bill is = %.2lf Taka only\nElectric bill = %.2lf Taka only\nMoylar bill = %d Taka only\nBuar bill = %d Taka only\nNight guard's bill = %d Taka only\nRasta porishkarer bill = %d Taka only\nAngina porishkar = %d Taka only\nCaretaker's bill = %d Taka only\n____________________________\ntotal bill = %.2lf Taka only\nThere are no extra charge in this month\nThanks Everyone\n\n\n",apar, flat, month, year, gas, (water/flat), (elect/flat), moyla, bua, night_guard,rasta_jharu, angina_porishkar, caretaker, bill);
    }
    else if(i==2){                      //fixed bill change
        double other,water,elect,total,bill;
        int year,flat,gas,moyla,bua,night_guard,angina_porishkar,rasta_jharu,caretaker;
        bill_collect=fopen("vara_save.txt","w");
        printf("Enter gas bill: ");
        scanf("%d",&gas);
        printf("\n");
        printf("Enter moylar bill: ");
        scanf("%d",&moyla);
        printf("\n");
        printf("Enter bua bill: ");
        scanf("%d",&bua);
        printf("\n");
        printf("Enter night guard's bill: ");
        scanf("%d",&night_guard);
        printf("\n");
        printf("Enter angina porishkarer bill: ");
        scanf("%d",&angina_porishkar);
        printf("\n");
        printf("Enter rasta jharur bill: ");
        scanf("%d",&rasta_jharu);
        printf("\n");
        printf("Enter other bill: ");
        scanf("%lf",&other);
        printf("\n");
        printf("Enter caretaker's bill: ");
        scanf("%d",&caretaker);
        printf("\n");
        fprintf(bill_collect,"%d %d %d %d %d %d %.2lf %d",gas,moyla,bua,night_guard,angina_porishkar,rasta_jharu,other,caretaker);
    }
    else if(i==3){                  //password change
            printf("Enter your password for change.\n");
        gets(pasw);
         pass=fopen("password.txt","w+");

        gets(pasw);
        fputs(pasw,pass);
    }
//    printf("Complete\nwanna continue?press 1\nelse anything: ");
    else if(i==4){              //exit
        return 0;
    }
//if a mistake in bill or want to make a new bill
tictac:
    printf("Notun kore bill korte chaile press 1, naile 1 bade ja iccha press korun\n");
    scanf("%d",&j);
    if(j==1)
        goto start;
    else
        return 0;
}
else{
    printf("Your password is incorrect\nGood Bye\n");
    return 0;
}
}
else
    return 0;
    int l;
    scanf("%d",&l);
    if(l==1)
        goto tictac;
    else
        return 0;
}
