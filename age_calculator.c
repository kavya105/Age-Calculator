#include <stdio.h>

#include <conio.h>
void main()
{
    int d1, d2, m1, m2, y1, y2, m, y, mn2, yn2, ynn2, d, mnn2;

    printf("==================================================================================\n");
    printf("\t\t\t\tAge Calculator\t\t\n");
    printf("==================================================================================\n\n\n");
    printf("Enter Birthday Date\n");
    scanf("%d", &d1);
    printf("Enter Birthday Month\n");
    scanf("%d", &m1);
    printf("Enter Birthday Year\n");
    scanf("%d", &y1);
    printf("Enter Current Date\n");
    scanf("%d", &d2);
    printf("Enter Current Month\n");
    scanf("%d", &m2);
    printf("Enter Current Year\n");
    scanf("%d", &y2);
    if ((d1 > 31 || d1 < 1) && (d2 > 31 || d2 < 1) && (m1 > 12 || m1 < 1) && (m2 > 12 || m2 < 1) && (y1 < 1 && y2 < 1))
    {
        printf("You Entered Something Wrong Try Again\n");
    }
    else
    {
        if ((d2 > d1) && (m2 > m1) && (y2 > y1))
        {
            d = d2 - d1;
            m = m2 - m1;
            y = y2 - y1;
            printf("%d day\tmonth %d\t year%d\t", d, m, y);
        }
        else if ((d2 > d1) && (m2 < m1) && (y2 > y1))
        {
            d = d2 - d1;
            m2 = m2 + 12;
            yn2 = y2 - 1;
            mn2 = m2 - m1;

            y = yn2 - y1;
            printf(" Your Age is %d day\t%d month\t%d year", d, mn2, y);
        }
        else if ((d2 < d1) && (m2 < m1) && (y2 > y1))

        {

            d2 = d2 + 30;
            d = d2 - d1;
            m2 = m2 - 1;
            mn2 = m2 + 12;
            mn2 = mn2 - m1;
            yn2 = y2 - 1;
            y = yn2 - y1;

            printf(" Your Age is %d day\t%d month\t%d year", d, mn2, y);
        }
        else if ((d2 < d1) && (m2 > m1) && (y2 > y1))
        {
            d2 = d2 + 30;
            m2 = m2 - 1;
            d = d2 - d1;
            mn2 = m2 - m1;
            yn2 = y2 - 1;
            y = yn2 - y1;

            printf(" Your Age is %d day\t%d month\t%d year", d, mn2, y);
        }
        else
    {
        printf("You Put Something Wrong\n");
    }
    }
    
    getch();
}


