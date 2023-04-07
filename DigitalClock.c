#include <stdio.h>
#include <windows.h>

int main()
{
    int h,m,s;
    int d = 1000; //we add a delay of 1000 milliseconds and we will use it in function sleep
    printf("Set time : \n");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)
    {
        printf("ERROR ! \n");
        exit(0);
    }
    while (1) // an infinite loop that will never stop
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",h ,m, s); // writing time in format 00:00:00
        Sleep(d); // slows down while loop and make it like a real clock
        system("cls");
    }
}