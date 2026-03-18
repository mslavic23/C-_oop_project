#include <string>
#include <vector>
#include <fstream>
#include <random>
#include <stdexcept>
#pragma once

class Datoteke{
	public:
		static std::string odaberiSlucajnogProizvodaca();
		static std::string odaberiSlucajniRazlagac();
	private:
		static std::vector<std::string> ucitajIzDatoteke(const std::string& filename);
};