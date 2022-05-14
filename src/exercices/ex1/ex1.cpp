#include "exercices/ex1/ex1.hpp"


void TP::EX1::ex1() {
	auto etudiant = TP::EX1::Etudiant();
	
	etudiant.initialiser("Benjamin", 06'01'02'03'04, TP::EX1::Sexe::MASCULIN);
	etudiant.afficher();
	etudiant.rentrerNote(10);
	
	etudiant.afficherNotes();
	
}