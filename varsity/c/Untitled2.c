#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    switch(a)
    {
        case 1:
            printf("Saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        case 7:
            printf("Friday");
            break;
        default:
            printf("Ganja khaya input dao naki? koisilam ganjar loge durba ghash meshao...\nmishaile ar etota tal hoita na\n");
    }

    return 0;
}
