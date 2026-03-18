#include <string>
#include <stdexcept>
#pragma once

class Spol{
	private:
		std::string spol;
	public:
		Spol() = default;
		std::string get_spol() const;
		void set_spol(const std::string& new_s);
};