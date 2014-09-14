/*
This is the main file for the project.
*/
#include "io.h"
#include <stdio.h>

char filename[255]; /* name of file to be parsed  */

int main (int argc, char *argv[])
{
    const char *filename = handle_command_args(argc,argv);
    printf("Processing file %s\n", filename);
}
