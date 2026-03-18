#include <string>
#include <stdexcept>
#include "Grabezljivac.h"
#include "Plijen.h"
#include "Spol.h"
#include "Prehrana.h"
#include "Datum_rodenja.h"
#pragma once

class Zivotinja{
	private:
		std::string ime;
		std::string vrsta;
		unsigned int starost;
		float tezina;
		Spol spol;
		DatumRodenja datumRodenja;
		Prehrana prehrana;
		
	public:
		Zivotinja() = default;
		
		std::string get_ime() const;
		void set_ime(const std::string& new_i);
		
		std::string get_vrsta() const;
		void set_vrsta(const std::string& new_v);
		
		unsigned int get_starost() const;
		void set_starost(unsigned int new_s);
		
		float get_tezina() const;
		void set_tezina(float new_t);
		
		Spol get_spol() const;
		void set_spol(const Spol& new_S);
		
		DatumRodenja get_datumRodenja() const;
		void set_datumRodenja(const DatumRodenja& new_d); 
		
		Prehrana get_prehrana() const;
		void set_prehrana(const Prehrana& new_p);
};