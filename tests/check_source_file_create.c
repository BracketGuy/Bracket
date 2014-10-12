#include <stdlib.h>
#include "inter_unit.h"
#include "../src/source_file.h"

int main(void)
{
    int lines = create_source_file(1);
    return (lines == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
