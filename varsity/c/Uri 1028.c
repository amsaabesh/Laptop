#include <stdio.h>



int main()

{

    int i, n, a, b;

    int di1, di2, c;



    scanf("%d", &n);



    for ( i = 0; i < n; ++i)

    {

        scanf("%d%d", &a, &b);



        if(b > a){

            di1 = b;

            di2 = a;

        }else{

            di1 = a;

            di2 = b;

        }



        while(di1 % di2 != 0)

        {

            c = di1 % di2;

            di1 = di2;

            di1 = c;

        }



        printf("%d\n", di1);

    }



    return 0;

}
