#ifndef REPOSITORIO_H
#define REPOSITORIO_H

#include "Entidade.h"
#include <vector>

struct entidade_comparator {
    bool operator()(const Entidade &entidade1, const Entidade &entidade2) const {
        return entidade1.getId() < entidade2.getId();  
    }
};

template <class T = Entidade>
class Repositorio {
    private:
        std::vector<T, entidade_comparator> lista;
        
    public:
        Repositorio();
        virtual void carregarDados(T* entidade) = 0;
        virtual std::vector<T*, entidade_comparator> getLista() = 0;
        virtual T* get(int id) = 0;
        virtual void salvar(T* obj) = 0;
        virtual void salvarArquivo() = 0;
        virtual int getProximoId() = 0;
        
        
};


#endif /* REPOSITORIO_H */

