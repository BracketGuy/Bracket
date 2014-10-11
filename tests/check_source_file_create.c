#include <stdlib.h>
#include "inter_unit.h"
#include "../src/source_file.h"

int test_create_source_file(void)
{
    return 0;
}

int main(void)
{
    int number_failed = test_create_source_file();
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
