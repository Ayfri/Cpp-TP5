#include "inputs/inputs.hpp"

float float_input(const std::string &message, const float &min, const float &max) {
	std::string input;
	float number;
	
	while (true) {
		std::cout << message;
		std::cin >> input;
		
		try {
			number = std::stof(input);
			if (number < min || number > max) {
				std::cout << "Veuillez entrer un nombre entre " << min << " et " << max << "." << '\n';
				continue;
			} else {
				return number;
			}
		} catch (const std::invalid_argument&) {
			std::cout << "Entrée invalide. Veuillez entrer un nombre." << '\n';
		}
	}
}