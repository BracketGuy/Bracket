#ifndef INTER_UNIT_H
#define INTER_UNIT_H

/*! \file inter_unit.h
 *
 *  Contains declarations for functions used by unit tests in the bracket
 *  interpreter. 
 */

/*! \fn inter_unit_ck_int_eq(int first_test_number, int second_test_number)
 *     \brief Used to assert equality of integers.
 *         \param first_test_number The first number to test.
 *             \param second_test_number The second number to test.
 *
 *  Takes two integers to test, compares them, and returns 1 if they match
 *  and 0 if they don't.
 */
int inter_unit_ck_int_eq(int first_test_number, int second_test_number);

/*! \fn inter_unit_ck_str_eq(char *first_test_string, char *second_test_string)
 *     \brief Used to assert equality of strings.
 *         \param first_test_string The first string to test.
 *             \param second_test_string The second string to test.
 *
 *  Takes two strings to test, compares them, and returns 1 if they match
 *  and 0 if they don't.
 */
int inter_unit_ck_str_eq(char *first_test_string, char *second_test_string);

#endif /* INTER_UNIT_H */
