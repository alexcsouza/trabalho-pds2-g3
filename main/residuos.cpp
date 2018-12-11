#include <iostream>
#include <string>
#include <map>
#include <locale>
#include "cad_residuos.h"


   Cad_residuos::Cad_residuos()
   {
      std::map<int,residuo>lst;
      residuo res;
      res.desc = "a�o de constru��o";res.guarda = "Manter em local coberto, protegido da umidade e as arestas devem ser chanfradas";
      lst.insert(std::pair<int,residuo>(19998,res));
      res.desc = "arame";res.guarda = "Manter em local seco, enrolado em bobina e envolvido por material protetor";
      lst.insert(std::pair<int,residuo>(19999,res));
      res.desc = "pl�sticos de consumo dom�stico";res.guarda="Manter protegido de materiais combust�veis e longe de fontes de calor";
      lst.insert(std::pair<int,residuo>(20001,res));
      res.desc = "vidros de consumo dom�stico";res.guarda="Deve estar dentro de inv�lucro flex�vel e envolto por papel, com informa��o de conte�do externamente vis�vel.";
      lst.insert(std::pair<int,residuo>(20000,res));
      res.desc = "pl�stico(poliestireno)";res.guarda="Manter abaixo de 80�C, isolado de fontes de calor e n�o submeter a choques mec�nicos.";
      lst.insert(std::pair<int,residuo>(20002,res));
      res.desc = "pl�stico(polietileno de alta densidade)";res.guarda="Manter longe de fontes de calor.";
      lst.insert(std::pair<int,residuo>(20003,res));
      res.desc = "pl�stico(policloreto de vinila)";res.guarda="Manter abaixo de 80�c.";
      lst.insert(std::pair<int,residuo>(20004,res));
      res.desc = "metal ferroso(palha de a�o, agulhas, embalagem)";res.guarda="Acondicionar em caixas ou embalagem r�gida e lacrada, ambiente livre de umidade.";
      lst.insert(std::pair<int,residuo>(20005,res));
      res.desc = "�leo de cozinha";res.guarda="Guardar em garrafas de vidro ou de pl�stico de alta densidade, protegida de fontes de calor e luz solar.";
      lst.insert(std::pair<int,residuo>(20006,res));
      res.desc = "l�mpadas de descarga a baixa press�o(tubulares,circulares e compactas)";res.guarda="Manter longe de fontes de calor.";
      lst.insert(std::pair<int,residuo>(20007,res));
      res.desc = "l�mpadas de descarga a alta press�o(Luz mista,vapor met�lico e vapor de s�dio)";res.guarda="Utilizar embalagens originais ou embalagens contra choques. Afixar aviso externo e vedar, caso quebradas.";
      lst.insert(std::pair<int,residuo>(20008,res));
      res.desc = "pilhas e baterias de �xido de merc�rio(industriais o n�o)";res.guarda="Proteger contra choques e umidade, garantir que n�o sejam quebradas, de prefer�ncia nas embalagens originais. Se avariadas, guardar em recipiente hermeticamente fechado e resistente.";
      lst.insert(std::pair<int,residuo>(20009,res));
      res.desc = "baterias industriais de c�dmio, chumbo e seus compostos";res.guarda="Entregar ao fabricante ou distribuidor acondicionadas com r�tulos conforme normas da ABNT.";
      lst.insert(std::pair<int,residuo>(20010,res));
      res.desc = "pilhas e baterias port�teis";res.guarda="Embalar em caixas de materiais n�o-condutores e imperme�veis";
      lst.insert(std::pair<int,residuo>(20011,res));
      res.desc = "lixo hospitalar";res.guarda="Acondicionar conforme resolu��o RDC 33/2003(ANVISA) classificado como qu�mico, radioativo, comum ou perfurocortante";
      lst.insert(std::pair<int,residuo>(20012,res));
      res.desc = "lixo org�nico(alimentos fora da validade)";res.guarda="Pe�as de carne devem ser fracionadas. Produtos de origem animal in-natura acima de 50Kg, contatar a empresa de coleta urbana. Utilizar embalagens \"abertas\"";
      lst.insert(std::pair<int,residuo>(20013,res));
      lista = lst;
   };

   Cad_residuos::~Cad_residuos(){};

   bool Cad_residuos::consulta_residuo(int rsd)
   {
       std::map<int,residuo>::iterator it;
       it = this->lista.find(rsd);
       if(it==this->lista.end())
            return false;
       return true;
   }

     void Cad_residuos::imprime()
   {
		for(auto it:this->lista)
       {
           std::cout<<"Res�duo: ["<<it.second.desc<<"]\nArmazenamento:\t"<<it.second.guarda<<"\n\n"<<std::endl;
       }

   }

	void Cad_residuos::imprime2()
   {
		for(auto it:this->lista)
       {
           std::cout<<"["<<it.first<<"] "<<it.second.desc<<"\n"<<std::endl;
       }

   }




