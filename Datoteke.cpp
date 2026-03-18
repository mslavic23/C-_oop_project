#include "Datoteke.h"

std::vector<std::string> Datoteke::ucitajIzDatoteke(const std::string& filename){
    std::vector<std::string> linije;
	std::ifstream file(filename);
	if(!file.is_open()){
		throw std::runtime_error("Ne mogu otvoriti datoteku: " + filename);
	}
	
	std::string line;
	while(std::getline(file, line)){
		linije.push_back(line);
	}
	
	file.close();
	return linije;
}

std::string Datoteke::odaberiSlucajnogProizvodaca(){
	std::vector<std::string> proizvodaci = ucitajIzDatoteke("Proizvodaci.txt");
	if(proizvodaci.empty()){
		throw std::runtime_error("Datoteka Proizvodaci.txt je prazna ili ne postoji!");
	}
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(0, proizvodaci.size() - 1);
	
	return proizvodaci[dist(gen)];
	
}

std::string Datoteke::odaberiSlucajniRazlagac(){
	std::vector<std::string> razlagaci = ucitajIzDatoteke("Razlagaci.txt");
	if(razlagaci.empty()){
		throw std::runtime_error("Datoteka Razlagaci.txt je prazna ili ne postoji!");
	}
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(0, razlagaci.size() - 1);
	
	return razlagaci[dist(gen)];
}
