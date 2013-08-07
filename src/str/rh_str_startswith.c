bool rh_str_startswith(char* needle, char* haystack)
{  
    for (size_t i = 0, needle_len = strlen(needle); i < needle_len; ++i)
		if (needle[i] != haystack[i])
            return false;

    return true;
}

/*
// -------------------------------
// Example of function stuff, yay!
// -------------------------------

// Note to self: Should do a rh_st_endswith() too.

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool rh_str_startswith(char* needle, char* haystack);

int main()
{

    char *haystack = "say cheese";
	char say[] = "skay";

	rh_str_startswith(say, haystack) ? puts("Yup") : puts("Nope");

}
*/
