#include <stdio.h>
main()
{
float m_cat, m_caty;
    do
    {
        printf("m_cat?\n");
        scanf("%f",&m_cat);
            if (m_cat-4<0)
                {
                    printf("Kuschaj cat kocik njam-njam!!!\n");
                }
    }
    while (m_cat-4<0);
printf("Kocik cat oshen tolstij!!! Kocik idi gulac!!!\n");
    do
    {printf("m_caty?\n");
        scanf("%f",&m_caty);
            if (m_caty-4<0)
                {
                    printf("Kuschaj caty kocik njam-njam!!!\n");
                }
    }
    while (m_caty-4<0);
printf("Kocik caty oshen tolstij!!! Kocik idi gulac!!!\n");
return 0;
}
