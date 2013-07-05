char *rh_str_new(const char* src)
{
    // RadHam String New
    // ------------------------
    // Returns a mutable copy of the string passed to it on 
    // the heap memory. (The char* returned from this function MUST be 
    // freed by the programmer at a later point.)

    size_t dest_s = sizeof(char) * (strlen(src) + 1);

    if (dest_s < BUFSIZ) {
        char *dest = NULL;

        if ((dest = (char*)malloc(dest_s))) {
            strcpy(dest, src);
            
            return dest;
        }

    }
    
    return NULL;
}