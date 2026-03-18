#include "Razlagac.h"

Razlagac::Razlagac() : naziv(""){
}

std::string Razlagac::get_naziv() const{
	return naziv;
}
void Razlagac::set_naziv(const std::string& new_n){
	naziv = new_n;
}