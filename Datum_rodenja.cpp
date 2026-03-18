#include "Datum_rodenja.h"

std::string DatumRodenja::get_datum() const{
	return datum;
}

void DatumRodenja::set_datum(const std::string& new_d){
	datum = new_d;
}
