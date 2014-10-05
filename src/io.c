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

int count_lines_in_file(FILE *file)
{
    int count = 0;
    while(!feof(file))
    {
        int current_char = fgetc(file);
        if(current_char == '\n')
        {
            count++;
        }
    }
    rewind(file);
    return count;
}

int * read_in_file(const char *filename)
{
    if(filename == NULL)
    {
        exit(EXIT_FAILURE);   
    }
    else 
    {
        FILE *file = fopen( filename, "r" );
        if(file == 0)
        {
            fprintf(stderr, "Could not open file \"%s\". Make sure the file exists.\n", filename);    
        }
        else
        {
            int count = count_lines_in_file(file);
	    int current_char;
            while((current_char = fgetc(file)) != EOF)
            {
                printf("%c", current_char);
            }
	    printf("Processed %i lines.\n", count);
            fclose(file);
        }        	
    }
}
