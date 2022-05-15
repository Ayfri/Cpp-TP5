#pragma once

#include <string>
#include <iostream>
#include <limits>

/**
 * @brief Permet d'entrer un flottant.
 *
 * Prend une chaîne et deux flottants comme arguments. Demande à l'utilisateur d'entrer un nombre. Si le nombre
 * est compris entre les deux entiers, il renvoie le nombre. Si ce n'est pas le cas, demande à l'utilisateur de saisir à
 * nouveau un nombre.
 *
 * @param message Le message à afficher à l'utilisateur.
 * @param min La valeur minimale que l'utilisateur peut entrer.
 * @param max La valeur maximale que l'utilisateur peut entrer.
 *
 * @return le numéro entré par l'utilisateur.
 */
float float_input(const std::string &message = "Saisir un nombre : ", const float &min = 0, const float &max = std::numeric_limits<float>::max());

