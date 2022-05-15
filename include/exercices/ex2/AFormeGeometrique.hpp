

#pragma once

#include <utility>

#include "IFormeGeometrique.hpp"

namespace TP::EX2 {
	class AFormeGeometrique : public IFormeGeometrique {
	public:
		explicit AFormeGeometrique(std::string nom) : a_nom(std::move(nom)) {}
		
		std::string getNom() const noexcept override;
	private:
		std::string a_nom;
	};
}
