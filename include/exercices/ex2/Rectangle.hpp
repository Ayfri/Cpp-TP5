

#pragma once

#include "AFormeGeometrique.hpp"
#include <iostream>

namespace TP::EX2 {
	class Rectangle : public TP::EX2::AFormeGeometrique {
	public:
		Rectangle(const std::string& nom, double longueur, double largeur) : AFormeGeometrique(nom), a_longueur(longueur), a_largeur(largeur) {}
		
		void affichage() const override;
		
		double perimetre() const noexcept override ;
		
		double surface() const noexcept override;
	
	protected:
		double a_longueur;
		double a_largeur;
	};
}
