#include <stdlib.h> // malloc
#include <stdio.h>  // size_t, BUFSIZ, NULL
#include <string.h> // strlen

extern char* rh_stra(const char* src)
{
    /* The char* returned from this function MUST be free'd 
       by the programmer at a later point. */
    
    if ((strlen(src) + 1) >= (BUFSIZ -1))
        return NULL;
    
    size_t dest_s = sizeof(char) * (strlen(src) + 1);
    char *dest = (char*)malloc(dest_s);
    strcpy(dest, src);
    
    return dest;
}