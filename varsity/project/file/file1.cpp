#include<stdio.h>
#include<string.h>
int main()
{
    FILE *aabesh;
    char a[30];
    gets(a);
    int i,l;
    l=strlen(a);
    aabesh=fopen("aabesh.txt","a");
    if(aabesh==NULL)
        printf("file nai\nage file bana\n");
    else
        {
            for(i=0;i<=l;i++){
                fputc(a[i],aabesh);
             if(a[i]==l)
                    printf("\n");
            }
                printf("complete");
                fclose(aabesh);

        }

    return 0;
}
