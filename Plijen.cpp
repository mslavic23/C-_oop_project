#include <iostream>
#include "Plijen.h"


std::string Plijen::get_opasnost() const{
	return opasnost;
}
void Plijen::set_opasnost(const std::string& new_o){
	opasnost = new_o;
}


std::string Plijen::get_snalazljivost() const{
	return snalazljivost;
}
void Plijen::set_snalazljivost(const std::string& new_s){
	snalazljivost = new_s;
}
