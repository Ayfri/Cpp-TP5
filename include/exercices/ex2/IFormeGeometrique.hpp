#pragma once

#include <string>
#include "utils/debug.hpp"

namespace TP::EX2 {
	
	class IFormeGeometrique {
	public:
		virtual void affichage() const = 0;
		
		virtual std::string getNom() const noexcept = 0;
		
		virtual double perimetre() const noexcept = 0;
		
		virtual double surface() const noexcept = 0;
		
		virtual ~IFormeGeometrique() { DEBUG("~IFormeGeometrique()"); }
	};
}
