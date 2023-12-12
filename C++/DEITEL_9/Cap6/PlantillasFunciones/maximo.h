// maximo.h
template < typename Tipo>

Tipo maximo(Tipo val1, Tipo val2, Tipo val3){
	Tipo max = val1;

	if(val2 > max)
		max = val2;

	if(val3 > max)
		max = val3;

	return max;
}
