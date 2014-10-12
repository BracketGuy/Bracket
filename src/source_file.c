#include <stdlib.h>
#include "source_file.h"

SourceFile *source_file_create(int lines)
{
    SourceFile *source_file = (SourceFile *) malloc(sizeof(SourceFile));
    source_file->lines = lines;
    return source_file;
}
