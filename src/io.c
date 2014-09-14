#include <stdio.h>
const char *  handle_command_args(int argc, char **argv)
{
    if(argc != 2)
    {
        fprintf(stderr, "usage: bracket [filename]\n"); 
    }
    else
    {
        return argv[1];
    }
}
