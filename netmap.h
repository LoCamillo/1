#ifndef NETMAP_H
#define NETMAP_H

typedef struct roteador Roteador;
typedef struct terminal Terminal;

/*Inicializa o sentinela de uma lista
* inputs: nenhum
* output: Sentinela inicializado
* pre-condicao: nenhuma
* pos-condicao: sentinela da lista de retorno existe e os campos primeiro e ultimo apontam para NULL
*/
void CadastraRoteador(Roteador* roteador, ListaRot* rot);
void CadastraTerminal(Terminal* terminal, ListaTer* ter);
void RemoveRoteador(Roteador* roteador);
void RemoveTerminal(Terminal* terminal);
void ConectaTerminal(Roteador* roteador, Terminal* terminal);
void DesconectaTerminal(Terminal* terminal);
void ConectaRoteadores(Roteador* roteador1, Roteador* roteador2);
void DesconectaRoteadores(Roteador* roteador1, Roteador* roteador2);
int FrequenciaTerminal();
int FrequenciaOperadora();
void EnviarPacotesDados(Terminal* ter1, Terminal* ter2);
void ImprimeNetMap();


#endif /* NETMAP_H */
