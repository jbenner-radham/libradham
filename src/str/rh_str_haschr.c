// @requires: rh_str_chrpos
bool rh_str_chrhas(const char* str, char chr)
{
	return rh_str_chrpos(str, chr) != -1? true : false; 
}