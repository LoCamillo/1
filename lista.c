#include "lista.h"
#include<stdio.h>
#include<stdlib.h>

#define ROT 1
#define TER 2

struct celula_rot{
    Roteador* rot;
    CelulaRot* Prox;
    ListaRot* rotconectados;
};

struct celula_ter{
    Terminal* ter;
    CelulaTer* prox;
    Roteador* rotconectado;
};

struct lista_rot{
    CelulaRot* primeiro, ultimo;
};

struct lista_ter{
    CelulaTer* primeiro, ultimo;
};

ListaRot* IniciaListaRoteadores(){
    ListaRot* lista = (ListaRot*)malloc(sizeof(ListaRot));
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    return lista;
}

ListaTer* IniciaListaTerminais(){
    ListaTer* lista = (ListaTer*)malloc(sizeof(ListaTer));
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    return lista;
}


