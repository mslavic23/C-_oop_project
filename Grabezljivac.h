#include <string>
#pragma once

class Grabezljivac{
	private:
		double brzina;
		std::string sposobnostLova;
	public:
		Grabezljivac() = default;
		double get_brzina() const;
		void set_brzina(double new_b);
		
		std::string get_sposobnostLova() const;
		void set_sposobnostLova(const std::string& new_sL);
};
