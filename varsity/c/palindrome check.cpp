#include<stdio.h>
#include<string.h>
int main()
{
    char a[106];
    int b,i,j,flag=0;
    scanf("%s",a);
    b=strlen(a);
    for(i=0,j=b-1;i<b,j>=0;i++,j--){
        if(a[i]==a[j])
            continue;
        else{
            flag=1;
            break;
        }
    }
    if(flag)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;

}
