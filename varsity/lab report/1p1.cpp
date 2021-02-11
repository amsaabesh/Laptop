#include<stdio.h>
int main()
{
    int a[5]={2,3,6,5,9},b[5],i,j,k=6,temp=0;
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]==k)
            temp=1;
    }
    if(temp)
            printf("Found\n");
        else
            printf("Not Found\n");
        for(j=2;j<4;j++){
            a[j]=a[j+1];
        }
        for(j=0;j<4;j++){
                printf("%d\n",a[j]);}
            for(i=0;i<5;i++){
                if(a[i]==k)
                temp=i;
            }
            for(j=temp;j<4;j++){
                a[j]=a[j+1];
            }
             for(j=0;j<4;j++){
                printf("%d\n",a[j]);
    }
        for(i=2,j=0;i<6,j<5;i++,j++){
            b[j]=a[i];
        }
        a[2]=7;
        for(i=2,j=0;i<6,j<5;i++,j++){
            a[i+1]=b[j];
        }
        for(i=0;i<6;i++){
            printf("%d\n",a[i]);;
        }
    return 0;
}

