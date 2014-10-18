#include <stdlib.h>
#include "source_file.h"

SourceFile *source_file_create(int total_lines)
{
    SourceFile *source_file = (SourceFile *) malloc(sizeof(SourceFile));
    source_file->total_lines = total_lines;
    return source_file;
}
