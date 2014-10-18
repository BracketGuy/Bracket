#ifndef SOURCE_FILE_H
#define SOURCE_FILE_H

typedef struct SourceFile
{
    int total_lines;
} SourceFile;

SourceFile *source_file_create(int total_lines);

#endif /* SOURCE_FILE_H */
