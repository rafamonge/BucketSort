#pragma once
#include <string>
class Juego
{
public:
	std::string Nombre;
	int Nota;
	Juego(std::string nombre, int nota);
	std::string ToString();
};

