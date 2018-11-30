#ifndef REPOSITORIODEUSUARIOS_H
#define REPOSITORIODEUSUARIOS_H

#include <vector>
#include "Usuario.h"
#include "../Repositorio.h"

class RepositorioDeusuarios : Repositorio<Usuario>{
    private:
        static int proximoId;
    public:
            
    void carregarDados(Usuario* entidade) override;
//    Usuario* get(int id) override;
    vector<Usuario*, entidade_comparator> getLista() override;
    int getProximoId() override;
//    void salvar(Usuario* obj) override;
//    void salvarArquivo() override;

};

#endif /* REPOSITORIODEUSUARIOS_H */

