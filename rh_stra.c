extern char* rh_stra(const char* src)
{
    // RadHam STRing Allocation
    // ------------------------
    // The char* returned from this function MUST be free'd 
    // by the programmer at a later point.

    // Char pointers don't need a +1 for the NUL byte... I think.

    size_t dest_s = sizeof(char) * (strlen(src) + 1);

    if (dest_s < (BUFSIZ - 1)) {
        char *dest = NULL;

        if ((dest = (char*)malloc(dest_s))) {
            strcpy(dest, src);
            
            return dest;
        }

    }
    
    return NULL;
}