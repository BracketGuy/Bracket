#include <stdio.h>
#include <stdlib.h>
#include "inter_unit.h"
#include "../src/source_file_line.h"

int main(void)
{
    int success = EXIT_FAILURE;
    char test_line_text[] = "test line number 1";
    SourceFileLine *test_source_file_line = source_file_line_create(1,test_line_text);
    success = inter_unit_ck_str_eq(test_source_file_line->line_text,"test line number 1");
    return success;
}
