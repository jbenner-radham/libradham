libradham
=========

### &raquo; A Radioactive Hamster C helper library.

Status
------
Currently builds with GCC 4.8 & Clang 3.2 using the -std=c11 flag.

To Do
-----
+ Finish a TON more code.
+ Document it.
+ Tons of other magic.
+ ????
+ PROFIT!

Functions
---------

## String

### Has Character?
```C
bool rh_str_haschr(const char* str, char chr);
```
Returns a boolean value indicating whether or not the character you're searching for is in the provided string.

### New
```C
char *rh_str_new(const char* src);
```
Returns a mutable copy of the string passed to it on 
the heap memory. (The char* returned from this function MUST be 
freed by the programmer at a later point.)

### Trim - Left
```C
char *rh_str_triml(const char* src);
```
Returns a new string allocated on the heap which has had any whitespace on the left trimmed.

### Trim - Right
```C
char *rh_str_trimr(const char* src);
```
Returns a new string allocated on the heap which has had any whitespace on the right trimmed.

### Trim
```C
char *rh_str_trim(const char* src);
```
Returns a new string allocated on the heap which has had all outside whitespace trimmed.
