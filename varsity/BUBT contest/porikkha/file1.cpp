#include<stdio.h>
#include<string.h>
int main(){
    FILE *ajib;
    ajib=fopen("43IntakeCourseOffer.txt","r");
    int a;
    a235_i41_s6:
    printf("wanna continue? 0 or 1\n");
    scanf("%d",&a);
    if(a){
        char name[100],mail[100],id[100],c;
        printf("Enter name\n");
        scanf("%c",&c);
        gets(name);
        printf("Enter mail:\n");
        gets(mail);
        printf("Enter id:\n");
        gets(id);
        printf("how much course?\n");
        fprintf(ajib,"NAME: %s\nID: %s\nMAIL: %s\n",name,id,mail);
         int b;
        char course[10];
        scanf("%d",&b);
        for(int i=1;i<=b;i++){
            printf("c%d:\n",i);
            gets(course);
            fprintf(ajib,"course %d: %s",i,course);
        }
    goto a235_i41_s6;
    }
    else
        return 0;

}
