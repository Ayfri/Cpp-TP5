#include "exercices/ex1/Etudiant.hpp"

void TP::EX1::Etudiant::afficherNotes() const {
	std::cout << "Moyenne: " << getMoyenne() << '\n';
	std::cout << "Note la plus haute : " << getMaxNote() << '\n';
	std::cout << "Note la plus basse : " << getMinNote() << '\n';
}

float TP::EX1::Etudiant::getMoyenne() const  noexcept {
	auto moyenne = 0.0f;
	for (auto note: a_notes) {
		moyenne += note;
	}
	return moyenne / static_cast<float>(a_notes.size());
}

float TP::EX1::Etudiant::getMaxNote() const noexcept {
	auto max = 0.0f;
	for (auto note: a_notes) {
		if (note > max) {
			max = note;
		}
	}
	return max;
}

float TP::EX1::Etudiant::getMinNote() const noexcept {
	auto min = 20.0f;
	for (auto note: a_notes) {
		if (note < min) {
			min = note;
		}
	}
	return min;
}

void TP::EX1::Etudiant::rentrerNote(float note) {
	if (note < MIN_NOTE || note > MAX_NOTE) {
		throw std::invalid_argument("Note invalide");
	}
	a_notes.push_back(note);
}
