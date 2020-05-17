#include "Juego.h"

Juego::Juego(std::string nombre, int nota)
{
	Nombre = nombre;
	Nota = nota;
}

std::string Juego::ToString()
{
	return Nombre + std::string(" - ") + std::to_string(Nota);
}
