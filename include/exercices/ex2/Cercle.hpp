#pragma once

#include "AFormeGeometrique.hpp"
#include <cmath>
#include <iostream>

namespace TP::EX2 {
	class Cercle : public TP::EX2::AFormeGeometrique {
	public:
		Cercle(const std::string& nom, double rayon) : AFormeGeometrique(nom), a_rayon(rayon) {}
		void affichage() const override;
		
		double perimetre() const noexcept override;
		
		double surface() const noexcept override;
		
	private:
		double a_rayon;
	};
}
