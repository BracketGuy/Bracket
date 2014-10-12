#include <stdlib.h>
#include "source_file.h"

SourceFile *create_source_file(int lines)
{
    SourceFile *source_file = (SourceFile *) malloc(sizeof(SourceFile));
    source_file->lines = lines;
    return source_file;
}
