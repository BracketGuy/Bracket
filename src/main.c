/*
This is the main file for the project.
*/
#include <stdio.h>
#include "io.h"

const char *filename = { 0 }; /* Name of file to use */

int main (int argc, char *argv[])
{
    filename = handle_command_args(argc,argv);
    if(filename != NULL)
    {
        printf("Processing file %s\n", filename);
    }
}
