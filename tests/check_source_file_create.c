#include <stdlib.h>
/*#include <check.h>*/
#include "inter_unit.h"
#include "../src/source_file.h"

int test_create_source_file(void)
{
    return 0;
}

/*START_TEST(test_create_source_file)
{
    create_source_file(1);
    ck_assert_int_eq(1,1);
}
END_TEST

Suite * bracket_suite(void)
{
    Suite *s;
    TCase *tc_core;
    
    s = suite_create("Bracket");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_create_source_file);
    suite_add_tcase(s, tc_core);
    return s;
}*/

int main(void)
{
    /*int number_failed;
    Suite *s;
    SRunner *sr;
    
    s = bracket_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);*/
    int number_failed = test_create_source_file();
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
