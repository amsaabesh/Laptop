#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char pasw[20],input_pass[20];
    FILE *bill_save,*bill_collect,*pass,*add_info;
    char A[2];
    printf("Enter your password:\n");
    pass=fopen("password.txt","r");
    //scanf("%c",&A);
    gets(input_pass);
    while(!feof(pass)){
    fgets(pasw,20,pass);
    }
    fclose(pass);
    //password checking
    if(strcmp(pasw,input_pass)==0)
        {                  //password change
            char pasw_new[20];
            strcpy(pasw_new,pasw);
            printf("Enter your password for change.\nDon't use any important password,\nbecause we don't use any step for security....\n");
            printf("At least use 6 characters.\n");
        gets(pasw);
         pass=fopen("password.txt","w+");

        gets(pasw);
        int char_size=0;
        fputs(pasw,pass);
    }

else{
    printf("Your password is incorrect\nGood Bye\n");
    fclose(pass);
    return 0;
}
}

