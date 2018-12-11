#include <set>
#include <vector>
#include <string>
#include <iostream>
#include <locale>
#include <algorithm>
#include "cad_usr.h"
#include "acessoria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tamanho 100


Cad_usr::Cad_usr()
{
    char name[Tamanho], contat[Tamanho], pass[Tamanho], receita[Tamanho];
    std::cout<<"\n";
    std::cout<<">>>>>>>> PARA REALIZAR O CADASTRO INFORME OS DADOS A SEGUIR: <<<<<<<<\n"<<std::endl;





    if(valida_tp_pessoa()=='2')
    {
        this->pj = true;
    }
    else
    {
        this->pj = false;
    }

//------------------------------------------------------------------------------------------
    this->nome = valida_nome(this->pj);

//------------------------------------------------------------------------------------------
    this->nome = valida_cad_receita(this->pj);

//------------------------------------------------------------------------------------------
     if(valida_perfil()=='2')
    {
        this->perfil = true;
    }
    else
    {
        this->perfil = false;
    }
//------------------------------------------------------------------------------------------
    ender e = valida_ender();
    this->endereco = e;
//------------------------------------------------------------------------------------------
    this->locais_coleta.push_back(e);
//------------------------------------------------------------------------------------------
    this->contato = valida_contato();

//------------------------------------------------------------------------------------------
    this->material = valida_material();
//------------------------------------------------------------------------------------------
    this-> senha = valida_senha();


};

Cad_usr::~Cad_usr()
{
};

bool Cad_usr::pega_tp_pessoa()
{
    return pj;
};

std::string Cad_usr::pega_contato()
{
    return contato;
};

std::string Cad_usr::pega_nome()
{
    return nome;
};

std::string Cad_usr::pega_id()
{
    return cad_receita;
};

ender Cad_usr::pega_endereco()
{
    return endereco;
};

bool Cad_usr::acha_local(std::string estado,std::string cidade,std::string bairro)
{
       std::vector<ender>e = locais_coleta;
       for(unsigned int it=0;it<e.size();++it)
       {
           if(estado.compare(e[it].estado)==0 && cidade.compare(e[it].cidade)==0 && bairro.compare(e[it].bairro)==0)
                return true;
       }
       return false;
};

bool Cad_usr::acha_res(int material)
{
       std::vector<int>::iterator it;
       it = std::find(this->tipos_residuo.begin(),this->tipos_residuo.end(),material);
       if(it==this->tipos_residuo.end())
            return false;
       return true;
};


void Cad_usr::adiciona_local(ender e)
{
    int k;
    for(k = 0;k<e.estado.size();++k)
        e.estado[k] = std::toupper(e.estado[k]);
    for(k = 0;k<e.cidade.size();++k)
        e.cidade[k] = std::toupper(e.cidade[k]);
    for(k = 0;k<e.bairro.size();++k)
        e.bairro[k] = std::toupper(e.bairro[k]);
    for(k = 0;k<e.rua_av.size();++k)
        e.rua_av[k] = std::toupper(e.rua_av[k]);
    this->locais_coleta.push_back(e);
};

void Cad_usr::adiciona_res(int material)
{
    if(material<20014 && material>19997)
        this->tipos_residuo.push_back(material);
    else
        std::cout<<"Tipo de resíduo inexistente(faixa de códigos = [19998,20013]."<<std::endl;
};

void Cad_usr::imprime_locais()
{
    std::vector<ender>e = locais_coleta;
    for(unsigned int i = 0;i < e.size();++i)
        std::cout<<"Local["<<i<<"]: "<<e[i].estado<<"/"<<e[i].cidade<<std::endl<<"Bairro => "<<e[i].bairro<<std::endl<<"Número => "<<e[i].num<<std::endl;
};


std::string Cad_usr::pega_senha()
{
	return senha;
}

bool Cad_usr::pega_perfil()
{
	return perfil;
}

int Cad_usr::pega_material()
{
	return material;
}











