#include <string>

class Jugador
{
    private:
        
    public:
        int num_jugador;
        Jugador(int jugador_)
        :num_jugador(jugador_){}
    
    void set_jugador(int jugador_)
    {
        num_jugador = jugador_;
    }
    int get_jugador()
    {
        return num_jugador;
    }
    void pedir_num_jugadores();
};
