#include <stdio.h>
#include "io.h"

int main (int argc, char *argv[])
{
    filename = handle_command_args(argc,argv);
    read_in_file(filename);
}