#include <iostream>
#include <ctime>
#include <vector>
#include "funciones.h"
#include "rlutil.h"

using namespace std;

void MostrarTitulo();

void MostrarMenu (string& jugador1, string& jugador2, int& MejorPuntaje, string& MejorJugador);

void Rondas(string& jugador1, string& jugador2, int n, int &puntaje1, int &puntaje2, int& MejorPuntaje, string& MejorJugador );

int TirarDado6caras();

int TirarDado12caras();

void victoriaAutomatica(int dados, int puntaje, bool j);


int main (){



 srand(time(nullptr));
 string jugador1;
 string jugador2;
 int MejorPuntaje = 0;
 string MejorJugador;

 MostrarTitulo();
 MostrarMenu(jugador1, jugador2,MejorPuntaje, MejorJugador);

  return 0;
}
