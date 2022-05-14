#pragma once

#include <vector>
#include "Personne.hpp"

/**
 * @namespace Exercice 1
 * @brief Namespace pour l'exercices 1.
 *
 * L'exercice 1 est un exercice de manipulation de classes qui introduit l'héritage.
 * Il permet de créer une classe Etudiant héritant la classe Personne, de lui affecter des valeurs, de les afficher et de détruire la classe.
 */
namespace TP::EX1 {
	
	
	/**
	 * @class Etudiant
	 * @brief Classe Etudiant
	 *
	 * Cette classe permet de créer un Etudiant, de lui ajouter des notes et de les afficher.
	 * Elle hérite de la classe Personne.
	 */
	class Etudiant : public Personne {
	public:
		/**
		 * @brief La note minimale.
		 *
		 * La plus petite noe que peut avoir un étudiant.
		 */
		static const auto MIN_NOTE = 0U;
		
		/**
		 * @brief La note maximale.
		 *
		 * La plus grande note que peut avoir un étudiant.
		 */
		static const auto MAX_NOTE = 20U;
		
		/**
		 * @brief Affiche les notes.
		 *
		 * Affiche les notes de l'étudiant ainsi que la moyenne, la note minimale et la note maximale.
		 */
		void afficherNotes() const;
		
		/**
		 * @brief Renvoie la moyenne des notes.
		 * @return La moyenne des notes.
		 *
		 * Renvoie la moyenne des notes de l'étudiant.
		 */
		float getMoyenne() const noexcept;
		
		/**
		 * @brief Renvoie la plus grande note.
		 * @return La plus grande note.
		 *
		 * Renvoie la plus grande note de l'étudiant.
		 */
		float getMaxNote() const noexcept;
		
		/**
		 * @brief Renvoie la plus petite note.
		 * @return La plus petite note.
		 *
		 * Renvoie la plus petite note de l'étudiant.
		 */
		float getMinNote() const noexcept;
		
		/**
		 * @brief Ajoute une note à l'étudiant.
		 * @param note La note à ajouter.
		 *
		 * Ajoute une note à l'étudiant.
		 */
		void rentrerNote(float note);
	
	private:
		/**
		 * @brief Notes de l'étudiant.
		 */
		std::vector<float> a_notes;
	};
}
