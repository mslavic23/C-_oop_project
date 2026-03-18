#include <string>
#include <vector>
#pragma once

class Proizvodac{
	private:
		std::string naziv;
	public:
		Proizvodac() = default;
		std::string get_naziv() const;
		void set_naziv(const std::string& new_n);
};