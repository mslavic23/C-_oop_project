#include <string>
#pragma once

class Plijen{
	private:
		std::string opasnost;
		std::string snalazljivost;
	public:
		Plijen() = default;
		std::string get_opasnost() const;
		void set_opasnost(const std::string& new_o);
		
		std::string get_snalazljivost() const;
		void set_snalazljivost(const std::string& new_s);
};