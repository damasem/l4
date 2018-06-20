#include <stdio.h>
main()
{
float a, b, c;
char op, ans;
printf("Poschitaem?\n");
printf("Y ili N\n");
scanf("%c",&ans);
if (ans=='Y')
{
while(ans=='Y')
{
printf("vvedite cifru a=\n");
scanf("%f",&a);
printf("vvedite cifru b=\n");
scanf("%f",&b);
printf("Kakuy arifmeticheskuy operciy sovershim?\n");
printf("+ - / *\n");
scanf("\n%c",&op);
switch (op)
{
case('+'):
c=a+b;
printf("%.0f %.0f : %.0f\n",a,b,c );
break;
case('-'):
c=a-b;
printf("%.0f %.0f : %.0f\n",a,b,c );
break;
case('/'):
c=a/b;
printf("%.0f %.0f : %.0f\n",a,b,c );
break;
case('*'):
c=a*b;
printf("%.0f %.0f : %.0f\n",a,b,c );
break;
}
printf("Poschitaem?\n");
printf("Y ili N\n");
scanf("\n%c",&ans);
}
}
return 0;
}

