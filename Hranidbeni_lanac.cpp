#include <iostream>
#include "Hranidbeni_lanac.h"

void HranidbeniLanac::postaviPodatke(const Proizvodac& pr, const Zivotinja& z, const DatumRodenja& d, const Spol& s, const Grabezljivac& g, const Plijen& p, const Prehrana& preh, const Razlagac& r){
	if(z.get_vrsta() != "grabezljivac" && z.get_vrsta() != "plijen" && z.get_vrsta() != "oboje"){
		throw std::invalid_argument("Neispravna vrsta zivotinje!");
	}
	if(s.get_spol().empty()){
		throw std::invalid_argument("Spol nije definiran!");
	}
	if(d.get_datum().empty()){
		throw std::invalid_argument("Datum rodenja nije definiran!");
	}
	
	proizvodac = pr;
	zivotinja = z;
	datumRodenja = d;
	spol = s;
	prehrana = preh;
	
	if(z.get_vrsta() == "grabezljivac"){
		grabezljivac = g;
	}else if(z.get_vrsta() == "plijen"){
		plijen = p;
	}else if(z.get_vrsta() == "oboje"){
		plijen = p;
		grabezljivac = g;
	}
	
	razlagac = r;
}

void HranidbeniLanac::ispisiLanac() const{
	std::cout << "HRANIDBENI LANAC" << std::endl;
	std::cout << "PROIZVODAC: " << proizvodac.get_naziv() << std::endl;
	std::cout << "ZIVOTINJA: " << zivotinja.get_ime() << std::endl;
	std::cout << "- vrsta: " << zivotinja.get_vrsta() << std::endl;
	std::cout << "- starost: " << zivotinja.get_starost() << " mj." << std::endl;
	std::cout << "- tezina: " << zivotinja.get_tezina() << " kg" << std::endl;
	std::cout << "Datum rodenja zivotinje: " << datumRodenja.get_datum() << std::endl;
	std::cout << "Spol: " << spol.get_spol() << std::endl;
	std::cout << "Prehrana: " << prehrana.get_tip() << std::endl;
	if(zivotinja.get_vrsta() == "grabezljivac"){
		std::cout << "Plijen: " << "ne" << std::endl;
		std::cout << "Grabezljivac: " << "da" << std::endl;
	    std::cout << "- brzina: " << grabezljivac.get_brzina() << " km/h" << std::endl;
     	std::cout << "- sposobnost lova: " << grabezljivac.get_sposobnostLova() << std::endl;		
	}else if(zivotinja.get_vrsta() == "plijen"){
		std::cout << "Plijen: " << "da" << std::endl;
     	std::cout << "- opasnost: " << plijen.get_opasnost() << std::endl;
    	std::cout << "- snalazljivost: " << plijen.get_snalazljivost() << std::endl;	
	    std::cout << "Grabezljivac: " << "ne" << std::endl;
	}else if(zivotinja.get_vrsta() == "oboje"){
		std::cout << "Plijen: " << "da" << std::endl;
     	std::cout << "- opasnost: " << plijen.get_opasnost() << std::endl;
    	std::cout << "- snalazljivost: " << plijen.get_snalazljivost() << std::endl;
		std::cout << "Grabezljivac: " << "da" << std::endl;
	    std::cout << "- brzina: " << grabezljivac.get_brzina() << std::endl;
     	std::cout << "- sposobnost lova: " << grabezljivac.get_sposobnostLova() << std::endl;
	}
	std::cout << "RAZLAGAC: " << razlagac.get_naziv() << std::endl;
}