#ifndef AGENDAMENTO_H
#define AGENDAMENTO_H

#include "Entidade.h"
#include "PerfilDoador.h"
#include "PerfilRecolhedor.h"
#include "PerfilReceptor.h"

class PerfilDoador;
class PerfilReceptor;
class PerfilRecolhedor;

class Agendamento : Entidade{
    private: 
        std::string local;
        std::string dataHora;
        bool recolhimentoConfirmado;
        bool doacaoConfirmada;
        bool recebimentoConfirmado;
        PerfilDoador* perfilDoador;
        PerfilReceptor* perfilReceptor;
        PerfilRecolhedor* perfilRecolhedor;
        
    public:
    Agendamento(int id, std::string local, std::string dataHora, bool recolhimentoConfirmado, bool doacaoConfirmada, bool recebimentoConfirmado, PerfilDoador* perfilDoador, PerfilReceptor* perfilReceptor, PerfilRecolhedor* perfilRecolhedor) :
    Entidade(id), local(local), dataHora(dataHora), recolhimentoConfirmado(recolhimentoConfirmado), doacaoConfirmada(doacaoConfirmada), recebimentoConfirmado(recebimentoConfirmado), perfilDoador(perfilDoador), perfilReceptor(perfilReceptor), perfilRecolhedor(perfilRecolhedor) {
    }
    
    std::string getNomeDoArquivo() override{
        return "data/agendamentos.csv";
    };

            
};


#endif /* AGENDAMENTO_H */

