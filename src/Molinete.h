#ifndef MOLINETE_H_
#define MOLINETE_H_

/**
 * Un Molinete representa el mecanismo de control de acceso a un lugar,
 * contabilizando las entradas y salidas de personas.
 *
 * La cantidad de personas dentro del lugar es mayor o igual a cero.
 *
 */
class Molinete {

	public:

		/*
		 * post: permite la entrada de una persona.
		 */
		void dejarEntrar();

		/*
		 * pre : existen personas dentro.
		 * post: permite la salida de una persona.
		 */
		void dejarSalir();

		/*
		 * post: devuelve la cantidad de personas que el Molinete dejó
		 * 		 entrar pero no dejó salir.
		 */
		int contarPersonasDentro();
		
		/*
		 * post: indica si existen personas que hayan entrado y
		 * 		 no hayan salido.
		 */
		bool existenPersonasDentro();
		
};

#endif /* MOLINETE_H_ */

