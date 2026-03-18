#include <string>
#pragma once

class DatumRodenja{
	private:
		std::string datum;
	public:
		DatumRodenja() = default;
		std::string get_datum() const;
		void set_datum(const std::string& new_d);
};