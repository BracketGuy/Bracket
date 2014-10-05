AC_INIT([bracket], [0.1.0])
AC_CONFIG_SRCDIR([src/main.c])
PKG_CHECK_MODULES([CHECK], [check >= 0.9.6])
AC_SEARCH_LIBS([suite_create],[check],[],[
  AC_MSG_ERROR([it does not look like you have check installed])
])
AM_INIT_AUTOMAKE([subdir-objects])
AC_PROG_CC
AC_OUTPUT(Makefile src/Makefile tests/Makefile)
