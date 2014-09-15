#include <stdio.h>
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