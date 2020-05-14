#include "Molinete.h"

void Molinete::dejarEntrar() {

	personasDentro++;
}

void Molinete::dejarSalir() {

	personasDentro--;
}

int Molinete::contarPersonasDentro() {

	return personasDentro;
}

bool Molinete::existenPersonasDentro() {

	return (personasDentro > 0);
}
