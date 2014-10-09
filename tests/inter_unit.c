#include <stdio.h>

int inter_unit_ck_int_eq(int first_test_number, int second_test_number)
{
    int truth = 0;
    if(first_test_number == second_test_number)
    {
        truth = 1;
    }
    return truth;
}

int inter_unit_ck_str_eq(char *first_test_string, char *second_test_string)
{
    int truth = 0;
    if(strncmp(first_test_string,second_test_string,50) == 0)
    {
        truth = 1;
    }
    return truth;
}
