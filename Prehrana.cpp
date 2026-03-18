#include "Prehrana.h"

std::string Prehrana::get_tip() const{
	return tip;
}

void Prehrana::set_tip(const std::string& new_t){
	if(new_t != "biljojed" && new_t != "svejed" && new_t != "mesojed"){
		throw std::invalid_argument("Neispravni tip prehrane!");
	}
	tip = new_t;
}