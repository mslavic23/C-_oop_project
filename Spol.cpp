#include "Spol.h"

std::string Spol::get_spol() const{
	return spol;
}
void Spol::set_spol(const std::string& new_s){
	if(new_s != "muzjak" && new_s != "zenka"){
		throw std::invalid_argument("Neispravan spol!");
	}
	spol = new_s;
}