#include <stdio.h>
#include <stdlib.h>
#include "inter_unit.h"
#include "../src/source_file.h"

int main(void)
{
    int success = EXIT_FAILURE;
    SourceFile *test_source_file = source_file_create(1);
    success = inter_unit_ck_int_eq(test_source_file->lines,1);
    return success;
}
