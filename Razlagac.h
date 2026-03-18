#include <string>
#pragma once

class Razlagac{
	private:
		std::string naziv;
	public:
		Razlagac();
		std::string get_naziv() const;
		void set_naziv(const std::string& new_n);
};