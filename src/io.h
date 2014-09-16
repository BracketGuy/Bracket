/*! \fn const char * handle_command_args(int argc,char **argv)
 *     \brief Handles command-line arguments.
 *         \param argc The number of command-line arguments.
 *             \param argv An array of command-line arguments.
 *          
 *  Takes the command-line arguments passed to main and returns the
 *  filename that we are going to process. Or, if no filename was found,
 *  it returns NULL.  
 */
const char * handle_command_args(int argc, char **argv);
