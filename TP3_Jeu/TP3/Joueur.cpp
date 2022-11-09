#include "Joueur.h"

Joueur::Joueur(std::string pseudo)
{
	this->pseudo = pseudo;
}

// Getters/Setters

std::string Joueur::getPseudo()
{
	return this->pseudo;
}

void Joueur::setPseudo(std::string pseudo)
{
	this->pseudo = pseudo;
}