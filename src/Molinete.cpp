#include "Molinete.h"

Molinete::Molinete() {

	personasDentro = 0;
	limiteDePersonasDentro = LIMITE_DE_PERSONAS_DENTRO;
}

Molinete::Molinete(int cantidadLimiteDePersonasDentro) {

	if (cantidadLimiteDePersonasDentro < 0) {

		cantidadLimiteDePersonasDentro = LIMITE_DE_PERSONAS_DENTRO;
	}

	personasDentro = 0;
	limiteDePersonasDentro = cantidadLimiteDePersonasDentro;
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

	return (personasDentro < limiteDePersonasDentro);
}
