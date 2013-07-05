int rh_str_chrpos(const char* str, char chr)
{
    int pos = -1;

    for (int i = 0, len = strlen(str); i < len; ++i)
        if (str[i] == chr) {
            pos = i;
            break;
        }

    return pos;
}