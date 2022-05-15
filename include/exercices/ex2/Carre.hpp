

#pragma once

#include "Rectangle.hpp"

namespace TP::EX2 {
	class Carre : public TP::EX2::Rectangle {
	public:
		Carre(const std::string& nom, double longueur) : TP::EX2::Rectangle(nom, longueur, longueur) {}
		
		void affichage() const override;
	};
}
