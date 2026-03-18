#include <iostream>
#include <stdexcept>
#include "Zivotinja.h"

std::string Zivotinja::get_ime() const{
	return ime;
}
void Zivotinja::set_ime(const std::string& new_i){
	ime = new_i;
}


std::string Zivotinja::get_vrsta() const{
	return vrsta;
}
void Zivotinja::set_vrsta(const std::string& new_v){
	if(new_v != "grabezljivac" && new_v != "plijen" && new_v != "oboje"){
		throw std::invalid_argument("Neispravna vrsta zivotinje! ");
	}
	vrsta = new_v;
}


unsigned int Zivotinja::get_starost() const{
	return starost;
}
void Zivotinja::set_starost(unsigned int new_s){
	starost = new_s;
}


float Zivotinja::get_tezina() const{
	return tezina;
}
void Zivotinja::set_tezina(float new_t){
	tezina = new_t;
}


Spol Zivotinja::get_spol() const{
	return spol;
}
void Zivotinja::set_spol(const Spol& new_s){
	spol = new_s;
}


DatumRodenja Zivotinja::get_datumRodenja() const{
	return datumRodenja;
}
void Zivotinja::set_datumRodenja(const DatumRodenja& new_d){
	if(new_d.get_datum().empty()){
		throw std::invalid_argument("Datum rodenja nije definiran!");
	}
	datumRodenja = new_d;
}


Prehrana Zivotinja::get_prehrana() const{
	return prehrana;
}
void Zivotinja::set_prehrana(const Prehrana& new_p){
	prehrana = new_p;
	if(prehrana.get_tip() == "biljojed"){
		return set_vrsta("plijen");
	}else if(prehrana.get_tip() == "mesojed"){
		set_vrsta("grabezljivac");
	}else if(prehrana.get_tip() == "svejed"){
		return set_vrsta("oboje");
	}
}