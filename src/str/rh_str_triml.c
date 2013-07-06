// @requires: rh_str_new
char *rh_str_triml(const char *str_src)
{
    bool space = false;

    for (size_t i = 0, len = strlen(str_src); i < len; ++i)

        if (isspace(str_src[i]))
            space = true;
        else
            if (space)
                return rh_str_new(strchr((const char*)str_src, str_src[i]));

    return NULL;
}