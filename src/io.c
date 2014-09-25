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
        FILE *source_file = fopen( filename, "r" );
        if(source_file == 0)
        {
            fprintf(stderr, "Could not open file \"%s\". Make sure the file exists.\n", filename);    
        }
        else
        {
            int current_char;
            while((current_char = fgetc(source_file)) != EOF)
            {
                printf("%c", current_char);
            }
            fclose(source_file);
        }        	
    }
}
