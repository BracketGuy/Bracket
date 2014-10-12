#ifndef SOURCE_FILE_H
#define SOURCE_FILE_H

typedef struct SourceFile
{
    int lines;	
} SourceFile;

SourceFile *create_source_file(int lines);

#endif /* SOURCE_FILE_H */
