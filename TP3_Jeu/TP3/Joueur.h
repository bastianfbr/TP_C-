#pragma once

#ifndef JOUEUR_H
#define JOUEUR_H

#endif // JOUEUR_H

#include <string>;

class Joueur {
public:

	Joueur(std::string pseudo);

	// Getters/Setters

	std::string getPseudo();
	void setPseudo(std::string pseudo);
private:

	std::string pseudo;
};
