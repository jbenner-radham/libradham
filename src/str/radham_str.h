#ifndef _LIBRADHAM_STR_H

#define _LIBRADHAM_STR_H

#include <ctype.h>      // isspace()
#include <stdbool.h>    // bool
#include <stdio.h>      // BUFSIZ, NULL, size_t
#include <stdlib.h>     // free(), malloc()
#include <string.h>     // NULL, size_t, strlen(), strcpy(), strstr(), strtok()

char *rh_str_new(const char*);
#include "rh_str_new.c"

char *rh_str_triml(const char*);
#include "rh_str_triml.c"

char *rh_str_trimr(const char*);
#include "rh_str_trimr.c"

char *rh_str_trim(const char*);
#include "rh_str_trim.c"

int rh_str_chrpos(const char*, char);
#include "rh_str_chrpos.c"

bool rh_str_haschr(const char*, char);
#include "rh_str_haschr.c"

bool rh_str_startswith(char* needle, char* haystack);
#include "rh_str_startswith.c"

#endif //_LIBRADHAM_STR_H
