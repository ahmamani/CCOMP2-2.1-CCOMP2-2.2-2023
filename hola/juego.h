
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>

class Juego 
{
    public:
        Juego();

        void jugar();

    private:
        std::vector<std::string> m_cartas;
        int m_puntuacionJugador;
        int m_puntuacionDealer;

        void inicializarCartas();
        void barajarCartas();
        int obtenerValorCarta(const std::string& carta);
        void repartirCartasIniciales();
        void jugarTurnoJugador();
        void jugarTurnoDealer();
        void mostrarResultados();
};