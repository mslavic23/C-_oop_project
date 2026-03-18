#include "Proizvodac.h"
#include "Zivotinja.h"
#include "Datum_rodenja.h"
#include "Spol.h"
#include "Grabezljivac.h"
#include "Plijen.h"
#include "Prehrana.h"
#include "Razlagac.h"
#include "Datoteke.h"
#pragma once

class HranidbeniLanac{
	private:
		Proizvodac proizvodac;
		Zivotinja zivotinja;
		DatumRodenja datumRodenja;
		Spol spol;
		Grabezljivac grabezljivac;
		Plijen plijen;
		Prehrana prehrana;
		Razlagac razlagac;
	public:
		HranidbeniLanac() = default;
		void postaviPodatke(const Proizvodac& pr, const Zivotinja& z, const DatumRodenja& d, const Spol& s, const Grabezljivac& g, const Plijen& p, const Prehrana& preh, const Razlagac& r);
		void ispisiLanac() const;
};