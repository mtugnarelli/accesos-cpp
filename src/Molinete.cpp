#include "Molinete.h"

Molinete::Molinete() {

	personasDentro = 0;
}

void Molinete::dejarEntrar() {

	personasDentro++;
}

void Molinete::dejarSalir() {

	if (personasDentro > 0) {

		personasDentro--;
	}
}

int Molinete::contarPersonasDentro() {

	return personasDentro;
}

bool Molinete::existenPersonasDentro() {

	return (personasDentro > 0);
}
