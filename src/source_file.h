#ifndef SOURCE_FILE_H
#define SOURCE_FILE_H

typedef struct SourceFile
{
    int lines;	
} SourceFile;

SourceFile *source_file_create(int lines);

#endif /* SOURCE_FILE_H */
