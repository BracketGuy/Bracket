#ifndef SOURCE_FILE_LINE_H
#define SOURCE_FILE_LINE_H

typedef struct SourceFileLine
{
    int line_number;
    char line_text;
} SourceFileLine;

SourceFileLine *source_file_line_create(int line_number, char line_text);

#endif /* SOURCE_FILE_LINE_H */
