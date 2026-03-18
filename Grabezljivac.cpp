#include <iostream>
#include "Grabezljivac.h"

double Grabezljivac::get_brzina() const{
	return brzina;
}
void Grabezljivac::set_brzina(double new_b){
	brzina = new_b;
}

std::string Grabezljivac::get_sposobnostLova() const{
	return sposobnostLova;
}
void Grabezljivac::set_sposobnostLova(const std::string& new_sL){
	sposobnostLova = new_sL;
}



