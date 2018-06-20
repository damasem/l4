#include <stdio.h>
main()
{
float a, b, c, d;
char ans;
 printf("proverim was na znanie tablici umnogenija Y/N\n");
 scanf("%c",&ans);
    if (ans=='Y')
    {
        do
        {
            scanf("%c",&ans);
            printf("vvedite cifru a=\n");
            scanf("%f",&a);
            printf("vvedite cifru b=\n");
            scanf("%f",&b);
            printf("A kak vi dumaete - chemu ravno proizwedenie a i b? Vvedite otvet d=\n");
            scanf("%f",&d);
            c=a*b;
            (c-d==0) ? (printf("Da-da. Vi otvtili werno\n")) : (printf("Shutite?\n"));
            printf("proverim was na znanie tablici umnogenija Y/N\n");
            scanf("\n%c",&ans);
        }
        while (ans=='Y');
    }
    printf("Do skorih wstrech\n");
 return 0;
}

