#ifndef CAD_RESIDUOS_H_INCLUDED
#define CAD_RESIDUOS_H_INCLUDED
#include <map>

typedef struct residuo
{
    std::string desc;
    std::string guarda;
}residuo;

class Cad_residuos
{

    private:
        std::map<int,residuo>lista;
    public:
        Cad_residuos();
        ~Cad_residuos();
        bool consulta_residuo(int);
        void imprime();
	void imprime2();
};
#endif // CAD_RESIDUOS_H_INCLUDED
