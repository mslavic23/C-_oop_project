#include <iostream>
#include <string>
#include "Proizvodac.h"
#include "Zivotinja.h"
#include "Grabezljivac.h"
#include "Plijen.h"
#include "Spol.h"
#include "Prehrana.h"
#include "Datum_rodenja.h"
#include "Hranidbeni_lanac.h"
#include "Datoteke.h"


int main(){
	
	Proizvodac pr1;
	pr1.set_naziv(Datoteke::odaberiSlucajnogProizvodaca());
	
	
	Zivotinja z1, z2, z3;
	z1.set_ime("skakavac");
	z1.get_vrsta();
	z1.set_starost(1);
	
	z1.set_tezina(0.05);
	z2.set_ime("zaba");
	z2.set_vrsta("oboje");
	z2.set_starost(3);
	z2.set_tezina(2.5);
	
	z3.set_ime("zmija");
	z3.set_vrsta("grabezljivac");
	z3.set_starost(12);
	z3.set_tezina(4.1);
	
	Prehrana preh1, preh2, preh3;
	preh1.set_tip("biljojed");
	preh2.set_tip("svejed");
	preh3.set_tip("mesojed");
	
	Plijen p1, p2, p3;
	p1.set_opasnost("velika zbog velicine zivotinje");
	p1.set_snalazljivost("dobra zbog sposobnosti letenja");
	p2.set_opasnost("umjerena zbog vode");
	p2.set_snalazljivost("visoka zbog mogucnosti ronjenja");

	Grabezljivac g1, g2, g3;
	g2.set_brzina(5.9);
	g2.set_sposobnostLova("umjerena");
	g3.set_brzina(10.3);
	g3.set_sposobnostLova("dobra");
	
	Spol s1, s2, s3;
	s1.set_spol("zenka");
	s2.set_spol("muzjak");
	s3.set_spol("muzjak");
	
	z1.set_prehrana(preh1);
	z2.set_prehrana(preh2);
	z3.set_prehrana(preh3);
	
	DatumRodenja d1, d2, d3;
	d1.set_datum("10.04.2024.");
	d2.set_datum("13.02.2024.");
	d3.set_datum("7.7.2023.");
	
	Razlagac r1;
	r1.set_naziv(Datoteke::odaberiSlucajniRazlagac());
	
	HranidbeniLanac lanac1, lanac2, lanac3;
	lanac1.postaviPodatke(pr1, z1, d1, s1, g1, p1, preh1, r1);
	lanac2.postaviPodatke(pr1, z2, d2, s2, g2, p2, preh2, r1);
	lanac3.postaviPodatke(pr1, z3, d3, s3, g3, p3, preh3, r1);
	
	lanac1.ispisiLanac();
	std::cout << "-------------------" << std::endl;
	lanac2.ispisiLanac();
	std::cout <<"--------------------" << std::endl;
	lanac3.ispisiLanac();
	
	return 0;
}