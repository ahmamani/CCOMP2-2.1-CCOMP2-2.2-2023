
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>

class Juegon 
{
    public:
        Juegon();

        void jugar2();

    private:
        std::vector<std::string> m_cartas2;
        int m_puntuacionJugador2;
        int m_puntuacionDealer2;

        void inicializarCartas2();
        void barajarCartas2();
        int obtenerValorCarta2(const std::string& carta2);
        void repartirCartasIniciales2();
        void jugarTurnoJugador2();
        void jugarTurnoDealer2();
        void mostrarResultados2();
};