#include "Proizvodac.h"


std::string Proizvodac::get_naziv() const{
	return naziv;
}

void Proizvodac::set_naziv(const std::string& new_n){
	naziv = new_n;
}
