#ifndef ACESSORIA_H_INCLUDED
#define ACESSORIA_H_INCLUDED
#include "cad_usr.h"

std::string dv_cpf(std::string);

std::string dv_cnpj(std::string);

std::string completa_id(std::string,bool);

int cta_espacos(std::string);

int cta_non_zeros(std::string);

bool e_alpha(std::string);

bool e_num(std::string);

char valida_tp_pessoa();

ender valida_ender();

char valida_perfil();

int valida_material();

std::string valida_nome(bool);

std::string valida_cad_receita(bool);

std::string valida_contato();

std::string valida_senha();


#endif // ACESSORIA_H_INCLUDED
