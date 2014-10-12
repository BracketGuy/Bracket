## For each test, add it's name to RUN_TESTS and it's source file to SRC_TESTS.

RUN_TESTS = test_source_file_create 
SRC_TESTS = test_source_file_create.c

TESTS = $(RUN_TESTS)
check_PROGRAMS = $(RUN_TESTS)
test_source_file_create_SOURCES = $(SRC_TESTS) $(top_builddir)/src/source_file.c inter_unit.c
