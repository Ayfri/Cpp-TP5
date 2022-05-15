#include "exercices/ex2/Rectangle.hpp"

void TP::EX2::Rectangle::affichage() const {
	std::cout << "Rectangle de longueur " << a_longueur << " et de largeur " << a_largeur << '\n';
	std::cout << "Périmètre : " << perimetre() << '\n';
	std::cout << "Surface : " << surface() << '\n';
}

double TP::EX2::Rectangle::perimetre() const noexcept {
	return 2 * (a_longueur + a_largeur);
}

double TP::EX2::Rectangle::surface() const noexcept {
	return a_longueur * a_largeur;
}
