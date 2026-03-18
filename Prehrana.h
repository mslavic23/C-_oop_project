#include <string>
#include <stdexcept>
#pragma once

class Prehrana{
	private:
		std::string tip;
	public:
		Prehrana() = default;
		std::string get_tip() const;
		void set_tip(const std::string& new_t);
};
