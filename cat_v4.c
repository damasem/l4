#include <stdio.h>
main()
{
float m_cat, m_caty;
    do
    {
        printf("m_cat?\n");
        scanf("%f",&m_cat);
        printf("m_caty?\n");
        scanf("%f",&m_caty);
            if (m_cat-4<0)
                {
                    printf("Kuschaj cat kocik njam-njam!!!\n");
                }
            else
                {
                printf("Kocik cat oshen ogirewshij!!! Kocik cat idi gulac!!!\n");
                }
            if (m_caty-4<0)
                {
                    printf("Kuschaj caty kocik njam-njam!!!\n");
                }
            else
                {
                printf("Kocik caty oshen ogirewshij!!! Kocik caty idi gulac!!!\n");
                }
    }
    while ((m_cat-4<0)||(m_caty-4<0));
printf("Kocik cat and kocik caty oshen ogirewshie!!! Kociki idite gulac!!!\n");
return 0;
}
