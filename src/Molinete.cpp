#include "Molinete.h"

Molinete::Molinete() {

	personasDentro = 0;
}

void Molinete::dejarEntrar() {

	if (cabenMasPersonasDentro()) {

		personasDentro++;
	}
}

void Molinete::dejarSalir() {

	if (existenPersonasDentro()) {

		personasDentro--;
	}
}

int Molinete::contarPersonasDentro() {

	return personasDentro;
}

bool Molinete::existenPersonasDentro() {

	return (personasDentro > 0);
}

bool Molinete::cabenMasPersonasDentro() {

	return (personasDentro < LIMITE_DE_PERSONAS_DENTRO);
}
