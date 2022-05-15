
#include "exercices/ex2/Carre.hpp"

void TP::EX2::Carre::affichage() const {
	std::cout << "Carré de côté " << a_longueur << '\n';
	std::cout << "Périmètre : " << perimetre() << '\n';
	std::cout << "Surface : " << surface() << '\n';
}