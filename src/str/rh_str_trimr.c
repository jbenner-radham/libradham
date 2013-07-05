// @requires: rh_str_new
char *rh_str_trimr(const char *str_src)
{
    // To Do: Look into optimizing this so it only
    // allocates the memory needed for the trimmed
    // string. 

    bool space = false;
    char *str_dest = rh_str_new(str_src);

    for (size_t i = strlen(str_dest); i > 0; --i)

        if (isspace(str_dest[i]))
            space = true;
        else
            if (space)
                str_dest[++i] = '\0'; break;

    return str_dest;
}