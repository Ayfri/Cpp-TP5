#include "exercices/ex1/ex1.hpp"
#include "inputs/inputs.hpp"


void TP::EX1::ex1() {
	auto etudiant = TP::EX1::Etudiant();
	
	etudiant.initialiser("Benjamin", 06'01'02'03'04, TP::EX1::Sexe::MASCULIN);
	etudiant.afficher();
	
	for (auto i = 0U; i < 10U; ++i) {
		float note = float_input("Entrez une note : ", 0, 20);
		etudiant.rentrerNote(note);
	}
	
	etudiant.rentrerNote(10);
	
	etudiant.afficherNotes();
	
}