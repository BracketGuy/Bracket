#include <stdio.h>
void handle_command_args(int argc, char **argv)
{
    if(argc != 2)
    {
        fprintf(stderr, "usage: bracket [filename]\n"); 
    }
    else
    {
        printf("I am going to process file \"%s\"...\n", argv[1]);
    }
}
