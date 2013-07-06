libradham
=========

A Radioactive Hamster C helper library.

Status
------
Currently builds with GCC 4.8 & Clang 3.2 using the -std=c11 flag. Will it compile in Visual Studio? (bwahahahahahahahahahahaha; ahem nope. I heard they were getting C99 support soon though...)

To Do
-----
* Finish a TON more code.
* Document it.
* Tons of other magic.
* ????
* PROFIT!


Functions
---------
### String - New
```
char *rh_str_new(const char* src);
```
Returns a mutable copy of the string passed to it on 
the heap memory. (The char* returned from this function MUST be 
freed by the programmer at a later point.)

### String - Trim Left
```
char *rh_str_triml(const char* src);
```
Returns a new string allocated on the heap which has had any whitespace on the left trimmed.

### String - Trim Right
```
char *rh_str_trimr(const char* src);
```
Returns a new string allocated on the heap which has had any whitespace on the right trimmed.

### String - Trim
```
char *rh_str_trim(const char* src);
```
Returns a new string allocated on the heap which has had all outside whitespace trimmed.
