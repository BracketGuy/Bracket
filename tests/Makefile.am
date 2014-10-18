## For each test, add it's name to RUN_TESTS

RUN_TESTS = test_source_file_create \
	    test_source_file_line_create

TESTS = $(RUN_TESTS)
check_PROGRAMS = $(RUN_TESTS)
test_source_file_create_SOURCES = test_source_file_create.c $(top_builddir)/src/source_file.c inter_unit.c
test_source_file_line_create_SOURCES = test_source_file_line_create.c $(top_builddir)/src/source_file_line.c inter_unit.c
