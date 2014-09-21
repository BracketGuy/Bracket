#include <stdio.h>
#include <stdlib.h>

const char *  handle_command_args(int argc, char **argv)
{
    if(argc == 2)
    {
        return argv[1];
    }
    else
    {
        fprintf(stderr, "usage: bracket [filename]\n");
        return NULL;
    }
}

int * read_in_file(const char *filename)
{
    if(filename == NULL)
    {
        exit(EXIT_FAILURE);   
    }
    else 
    {
        printf("Processing source file %s\n", filename);
    }
}