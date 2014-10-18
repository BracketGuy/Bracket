#include <stdlib.h>
#include "source_file_line.h"

SourceFileLine *source_file_line_create(int line_number, char line_text)
{
    SourceFileLine *source_file_line = (SourceFileLine *) malloc(sizeof(SourceFileLine));
    source_file_line->line_number = line_number;
    return source_file_line;
}
