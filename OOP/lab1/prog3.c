#include <stdio.h>

struct date{
    int year;
    int month;
    int day;
};

int main()
{
    typedef struct date D;

    D DOB = {2003,8,3};
    D today = {2023,9,4};

    if (DOB.day > today.day) 
    {
        int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        today.day = today.day + month[DOB.month - 1];
        today.month = today.month - 1;
    }
    if (DOB.month > today.month)
    {
        today.year = today.year - 1;
        today.month = today.month + 12;
    }
    printf("Your age is %d years %d months %d days.\n",(today.year-DOB.year),(today.month-DOB.month),(today.day-DOB.day));
    return 0;
}