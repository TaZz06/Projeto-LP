//
//Projeto realizado por:
//João Melo (40155)
//Ricardo Pinheiro (40108)
//

#ifndef PROJETO_LP_PROJECT_H
#define PROJETO_LP_PROJECT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCONFIG 2

/**
 * Configuração
 * Duração
 * Época
 * Modalidade
 * Antecedencia
 * Ocupação
 */

typedef struct regra_custo {
    char *regra;
    float ajuste;
} REGRA_CUSTO;

typedef struct politica {
    char *politica;
    int n_regras;
    int size_regras;
    REGRA_CUSTO *regras;
} POLITICA;

/**
 * airbnc
 * airbnd
 * airbne
 */

typedef struct plataforma {
    char *nome;
    int n_politicas;
    int size_politicas;
    POLITICA *ppoliticas;
} PLATAFORMA;

typedef struct dynarray_plataformas {
    int n_plataformas;
    int size_plataformas;
    PLATAFORMA *pplataformas;
} ARRAY_PLATAFORMAS;

typedef struct evento {
    int id_evento;
    char *nome;
    int hospede_id;
    int dia_inicio;
    int dia_fim;
    struct evento *pevento_next;
} EVENTO;

typedef struct lista_eventos {
    int n_eventos;
    EVENTO *peventos;
} LISTA_EVENTOS;

typedef struct dia {
    int dia;
    int mes;
    int ano;
    LISTA_EVENTOS eventos;
} DIA;

typedef struct array_dias {
    int n_dias;
    int size_dias;
    DIA *dias;
} ARRAY_DIAS;

typedef struct calendario {
    char *plataforma;
    ARRAY_DIAS dias;
} CALENDARIO;

typedef struct dynarray_calendarios {
    int n_calendarios;
    int size_calendarios;
    CALENDARIO *pcalendarios;
} ARRAY_CALENDAR;

typedef struct estudio {
    int id_estudio;
    int numero_porta;
    char config[MAXCONFIG];
    ARRAY_CALENDAR calendars;
    float preco_dia;
    float preco_mensal;
    float preco_final;
    int area;
} ESTUDIO;

typedef struct dynarray_estudios {
    int n_estudios;
    int size_estudios;
    ESTUDIO *pestudios;
} ARRAY_ESTUDIOS;

typedef struct edificio {
    int id_edificio;
    char *edf_morada;
    ARRAY_ESTUDIOS estudios;
    struct edificio *edf_next;
} EDIFICIO;

typedef struct lista_edificios {
    int n_edificios;
    EDIFICIO *pedificioshead, *pedificiostail;
} LISTA_EDIFICIOS;

typedef struct hospede {
    int id;
    int nome;
    LISTA_EDIFICIOS historico;
    struct hospede *phospede_next;
} HOSPEDE;

typedef struct lista_hospedes {
    int n_hospedes;
    HOSPEDE *phospedes;
} LISTA_HOSPEDES;

int main_project(int argc, const char *argv[]);

/**
* Iniciar uma lista de edificios.
* @return - pointer para a lista de edificios criada (LISTA_EDIFICIOS).
*/
LISTA_EDIFICIOS *create_edificios_queue();

/**
* Iniciar um edificio queue node.
* @return pointer para a lista de edificios criada
*/
EDIFICIO *create_edificio_queue_node();

/**
* Adiciona um  edificio ao queue de edificios (FIFO). Enqueue à tail.
* @param edificios_queue - queue de edificios.
* @param n_estudios - numero de estudios para criar o array de estudios associado ao edificio.
*/
void enqueue_edificio(LISTA_EDIFICIOS *edificios_queue, ARRAY_ESTUDIOS n_estudios);

/**
* Imprime uma lista de edificios dada.
* @param lequ - lista de edificios a ser imprimida.
*/
void print_rect_queue(LISTA_EDIFICIOS *lequ);

/**
 * Criar um array dinâmico de estudios com um dado tamanho inicial.
 * @param pae - apontador para o dynarray de estudios que caracteriza o estudio a inserir (ARRAY_ESTUDIOS).
 * @param initsize - tamanho inicial do array dinâmico de estudios.
 */
void create_dynarray_estudios(ARRAY_ESTUDIOS *pae, int initsize);

/**
 * Insere um estudio no array dinâmico da lista de edificios.
 * @param pae - apontador para o dynarray de estudios que caracteriza o estudio a inserir (ARRAY_ESTUDIOS).
 * @param id - id do estudio a ser incrementado pelo programa e não inserido pelo utilizador.
 * @param porta - número da porta indentificador do estudio.
 * @param config - T0 / T1 / T2 / T3 / T4
 * @param preco_dia - preço por noite do estudio a inserir.
 * @param preco_mensal - preço por mensal do estudio a inserir.
 * @param preco_final - preço final do estudio a inserir, a ser alterado pelas politicas da plataforma onde será inserido.
 * @param area - area em metro quadrado do estudio a inserir.
 */
void insert_student_dynarray_estudios(ARRAY_ESTUDIOS *pae, int id, int porta, char config[MAXCONFIG], float preco_dia,
                                      float preco_mensal, float preco_final, int area);

/**
 * Procura um student no array dinâmico da turma de students.
 * @param estudios - cópia do array que caracteriza o conjunto de estudios de um edificio (ARRAY_ESTUDIOS).
 * @param id_estudio - id do estudio a procurar no array dinâmico de estudios.
 * @return apontador para o estudio ou NULL (caso não exista).
 */
ESTUDIO *find_student_dynarray_estudios(ARRAY_ESTUDIOS estudios, int id_estudio);

/**
 * Imprime os estudios do array dinâmico do conjunto de estudios de um edificio.
 * @param estudios - cópia do array que caracteriza o conjunto de estudios de um edificio (ARRAY_ESTUDIOS).
 */
void print_dynarray_estudios(ARRAY_ESTUDIOS estudios);


#endif //PROJETO_LP_PROJECT_H
