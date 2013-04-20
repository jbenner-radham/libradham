#include "radham.h"
#include "rh_stra.c"

int main()
{
    char *mystr = rh_stra("hellotestandstuff");
    puts(mystr);
    free(mystr);
}