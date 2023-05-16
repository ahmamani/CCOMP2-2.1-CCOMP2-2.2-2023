#include "juego.h"
#include "jugador.h"
#include "menu.h"
#include <iostream>


using namespace std;

Menu::Menu() {
}
void Menu::mostrarMenu() {
    std::cout << "Bienvenido al juego de Blackjack" << std::endl;
    imprimirOpciones();
}

void Menu::imprimirOpciones() {
    std::cout << "Por favor, elija una opción:" << std::endl;
    std::cout << "1. Blackjack clásico" << std::endl;
    std::cout << "2. Blackjack normal" << std::endl;
}

Juego::Juego() :
    m_cartas{},
    m_puntuacionJugador{0},
    m_puntuacionDealer{0}
{
    inicializarCartas();
}

void Juego::jugar()
{
    barajarCartas();
    repartirCartasIniciales();

    jugarTurnoJugador();
    if (m_puntuacionJugador <= 21) {
        jugarTurnoDealer();
    }

    mostrarResultados();
}

void Juego::inicializarCartas()
{
    m_cartas = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
}

void Juego::barajarCartas()
{
    mt19937 randomEngine(static_cast<unsigned int>(chrono::system_clock::now().time_since_epoch().count()));
    shuffle(m_cartas.begin(), m_cartas.end(), randomEngine);
}

int Juego::obtenerValorCarta(const std::string& carta)
{
    if (carta == "A") {
        return 11;
    } else if (carta == "J" || carta == "Q" || carta == "K") {
        return 10;
    } else {
        return std::stoi(carta);
    }
}

void Juego::repartirCartasIniciales()
{
    m_puntuacionJugador = 0;
    m_puntuacionDealer = 0;

    for (int i = 0; i < 2; ++i) {
        m_puntuacionJugador += obtenerValorCarta(m_cartas.back());
        m_cartas.pop_back();
        m_puntuacionDealer += obtenerValorCarta(m_cartas.back());
        m_cartas.pop_back();
    }
}

void Juego::jugarTurnoJugador()
{
    char opcion = 'h';
    while (opcion == 'h' && m_puntuacionJugador < 21) {
        cout << "Tu puntuacion actual es: " << m_puntuacionJugador << ". ¿Quieres pedir otra carta (h) o plantarte (s)? ";
        cin >> opcion;
        if (opcion == 'h') {
            m_puntuacionJugador += obtenerValorCarta(m_cartas.back());
            m_cartas.pop_back();
        }
    }
}

void Juego::jugarTurnoDealer()
{
    while (m_puntuacionDealer < 17) {
        m_puntuacionDealer += obtenerValorCarta(m_cartas.back());
        m_cartas.pop_back();
    }
}

void Juego::mostrarResultados()
{
    cout << "Tu puntuacion final es: " << m_puntuacionJugador <<endl;
    cout << "La puntuacion del dealer es: " << m_puntuacionDealer <<endl;
    if (m_puntuacionJugador > 21) {
        cout << "Has perdido." <<endl;
    } else if (m_puntuacionDealer > 21 || m_puntuacionJugador > m_puntuacionDealer) {
        cout << "¡Has ganado!" <<endl;
    } else {
        cout << "Has perdido." <<endl;
    }
}

void Jugador::pedir_num_jugadores() 
{
    do
    {
        std::cout << "Hola, Soy el Diller del juego, por favor elije la cantidad jugadores: "; 
        std::cin >> num_jugador;
    }
    while (num_jugador < 1 || num_jugador >7);
    
}

int main()
{  
  
    Jugador jugador();
    Juego juego;
    juego.jugar();
    int opcion;

    do {
        std::cin >> opcion;
        if (opcion < 1 || opcion > 2) {
            std::cout << "Opción inválida, por favor elija entre 1 y 2." << std::endl;
        }
    } while (opcion < 1 || opcion > 2);

    return opcion;
}