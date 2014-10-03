/*! \file io.h
 *
 *  Contains declarations for functions and variables involved in
 *  I/O operations performed by Bracket. 
 */

/*! \var const char *filename
 *
 *  The name of the file that Bracket will be processing.
 */
const char *filename = { 0 };

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

/*! \fn int count_lines_in_file(FILE *file)
 *     \brief Counts lines in source file.
 *         \param file A pointer to the source file.
 *          
 *  Takes a pointer to a source file and returns a
 *  count of how many lines are in the file.
 */
int count_lines_in_file(FILE *file);

/*! \fn int * read_in_file(const char *filename)
 *     \brief Breaks input file into an array of lines.
 *         \param filename The filename to be processed.
 *          
 *  Takes a file name returns an array populated with lines of code.
 *  Or, if the file is empty, returns NULL.
 */
int * read_in_file(const char *filename);
