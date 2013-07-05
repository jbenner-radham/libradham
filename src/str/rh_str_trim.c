// @requires: rh_str_new, h_str_triml, rh_str_trimr
char *rh_str_trim(const char *str_src)
{
	return rh_str_trimr(rh_str_triml(str_src));
}