#include <iostream>
#include <string>
#include <map>
#include <locale>
#include "cad_residuos.h"


   Cad_residuos::Cad_residuos()
   {
      std::map<int,residuo>lst;
      residuo res;
      res.desc = "aço de construção";res.guarda = "Manter em local coberto, protegido da umidade e as arestas devem ser chanfradas";
      lst.insert(std::pair<int,residuo>(19998,res));
      res.desc = "arame";res.guarda = "Manter em local seco, enrolado em bobina e envolvido por material protetor";
      lst.insert(std::pair<int,residuo>(19999,res));
      res.desc = "plásticos de consumo doméstico";res.guarda="Manter protegido de materiais combustíveis e longe de fontes de calor";
      lst.insert(std::pair<int,residuo>(20001,res));
      res.desc = "vidros de consumo doméstico";res.guarda="Deve estar dentro de invólucro flexível e envolto por papel, com informação de conteúdo externamente visível.";
      lst.insert(std::pair<int,residuo>(20000,res));
      res.desc = "plástico(poliestireno)";res.guarda="Manter abaixo de 80ºC, isolado de fontes de calor e não submeter a choques mecânicos.";
      lst.insert(std::pair<int,residuo>(20002,res));
      res.desc = "plástico(polietileno de alta densidade)";res.guarda="Manter longe de fontes de calor.";
      lst.insert(std::pair<int,residuo>(20003,res));
      res.desc = "plástico(policloreto de vinila)";res.guarda="Manter abaixo de 80ºc.";
      lst.insert(std::pair<int,residuo>(20004,res));
      res.desc = "metal ferroso(palha de aço, agulhas, embalagem)";res.guarda="Acondicionar em caixas ou embalagem rígida e lacrada, ambiente livre de umidade.";
      lst.insert(std::pair<int,residuo>(20005,res));
      res.desc = "óleo de cozinha";res.guarda="Guardar em garrafas de vidro ou de plástico de alta densidade, protegida de fontes de calor e luz solar.";
      lst.insert(std::pair<int,residuo>(20006,res));
      res.desc = "lâmpadas de descarga a baixa pressão(tubulares,circulares e compactas)";res.guarda="Manter longe de fontes de calor.";
      lst.insert(std::pair<int,residuo>(20007,res));
      res.desc = "lâmpadas de descarga a alta pressão(Luz mista,vapor metálico e vapor de sódio)";res.guarda="Utilizar embalagens originais ou embalagens contra choques. Afixar aviso externo e vedar, caso quebradas.";
      lst.insert(std::pair<int,residuo>(20008,res));
      res.desc = "pilhas e baterias de óxido de mercúrio(industriais o não)";res.guarda="Proteger contra choques e umidade, garantir que não sejam quebradas, de preferência nas embalagens originais. Se avariadas, guardar em recipiente hermeticamente fechado e resistente.";
      lst.insert(std::pair<int,residuo>(20009,res));
      res.desc = "baterias industriais de cádmio, chumbo e seus compostos";res.guarda="Entregar ao fabricante ou distribuidor acondicionadas com rótulos conforme normas da ABNT.";
      lst.insert(std::pair<int,residuo>(20010,res));
      res.desc = "pilhas e baterias portáteis";res.guarda="Embalar em caixas de materiais não-condutores e impermeáveis";
      lst.insert(std::pair<int,residuo>(20011,res));
      res.desc = "lixo hospitalar";res.guarda="Acondicionar conforme resolução RDC 33/2003(ANVISA) classificado como químico, radioativo, comum ou perfurocortante";
      lst.insert(std::pair<int,residuo>(20012,res));
      res.desc = "lixo orgânico(alimentos fora da validade)";res.guarda="Peças de carne devem ser fracionadas. Produtos de origem animal in-natura acima de 50Kg, contatar a empresa de coleta urbana. Utilizar embalagens \"abertas\"";
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
           std::cout<<"Resíduo: ["<<it.second.desc<<"]\nArmazenamento:\t"<<it.second.guarda<<"\n\n"<<std::endl;
       }

   }

	void Cad_residuos::imprime2()
   {
		for(auto it:this->lista)
       {
           std::cout<<"["<<it.first<<"] "<<it.second.desc<<"\n"<<std::endl;
       }

   }




