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

#define MAXCONFIG 3  // T$ + "/0" ($=0/1/2/3/4)
#define T0 "T0"
#define T1 "T1"
#define T2 "T2"
#define T3 "T3"
#define T4 "T4"
#define EMPTY "  "

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
    DIA *pdias;
} ARRAY_DIAS;

typedef struct agenda {
    int id_agenda;
    char *plataforma;
    ARRAY_DIAS dias;
} AGENDA;

typedef struct dynarray_agenda {
    int n_agendas;
    int size_agendas;
    AGENDA *pagendas;
} ARRAY_AGENDAS;

typedef struct estudio {
    int id_estudio;
    int numero_porta;
    char config[MAXCONFIG];
    ARRAY_AGENDAS agendas;
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
    float latitude;
    float longitude;
    ARRAY_ESTUDIOS estudios;
    struct edificio *edf_next;
} EDIFICIO;

typedef struct lista_edificios {
    int n_edificios;
    EDIFICIO *pedificios;
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


/*---------------------------------------------------[EDIFICIOS]---------------------------------------------------*/

/**
* Iniciar uma lista de edificios.
* @return - pointer para a lista de edificios criada (LISTA_EDIFICIOS).
*/
LISTA_EDIFICIOS *create_lista_edificios(void);

/**
* Adiciona um  edificio à lista de edificios.
* @param lista_edificios
* @param id_edificio
* @param morada_edificio
* @param size_estudios - numero de estudios para criar o array de estudios associado ao edificio (ARRAY_ESTUDIOS).
*/
void insert_edificio_ordered(LISTA_EDIFICIOS *lista_edificios, char morada_edificio[], float latitude, float longitude,
                             int size_estudios);

EDIFICIO *find_edificio(const LISTA_EDIFICIOS *lista_edificios, int id_edificio);

void remove_edificio_ordered(LISTA_EDIFICIOS *lista_edificios, EDIFICIO *found_edificio);

void
change_edificio_info(LISTA_EDIFICIOS *lista_edificios, EDIFICIO *found_edificio, char morada_edificio[], float latitude,
                     float longitude);


void save_edificios_txt(LISTA_EDIFICIOS * listaEdificios, char filename[]);

void read_edificios_txt(LISTA_EDIFICIOS *listaEdificios, char filename[]);

void save_edificios_bin(LISTA_EDIFICIOS * listaEdificios, char filename[]);

void read_edificios_bin(LISTA_EDIFICIOS *listaEdificios, char filename[]);

void print_edificios(LISTA_EDIFICIOS *listaEdificios);

/*----------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------[ESTUDIOS]---------------------------------------------------*/
ARRAY_ESTUDIOS *create_dynarray_estudios(int initsize);

void insert_estudio_ordered(EDIFICIO *edificio, int porta, char config[MAXCONFIG], int size_agendas, float p_dia,
                            float p_mes, float p_final, int area);

ESTUDIO *binary_search_estudio(const EDIFICIO *found_edificio, int n, int numero_porta);

void remove_estudio_ordered(EDIFICIO *found_edificio, ESTUDIO *found_estudio);

void change_estudio_info(EDIFICIO * edificio, ESTUDIO *found_estudio, int porta, char config[MAXCONFIG], int size_agendas, float p_dia,
                         float p_mes, float p_final, int area);

void sort_estudios(EDIFICIO *edificio);

void print_estudios(const EDIFICIO *found_edificio);

/*----------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------[AGENDAS]---------------------------------------------------*/

ARRAY_AGENDAS *create_dynarray_agendas(int initsize);

void insert_agenda(ESTUDIO *found_estudio, char plataforma[], int size_dias);

AGENDA *find_agenda(const ESTUDIO *found_estudio, int id_agenda);

void remove_agenda(ESTUDIO *estudio, AGENDA *found_agenda);

void change_agenda_info(ESTUDIO *found_estudio, AGENDA *found_agenda, char plataforma[]);

void sort_agendas(ESTUDIO *found_estudio);

void print_agendas(const ESTUDIO *found_estudio);

/*----------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------[DIAS]---------------------------------------------------*/

ARRAY_DIAS *create_dynarray_dias(int initsize);

void insert_dia(AGENDA *found_agenda, int dia, int mes, int ano);

DIA *find_dia(const AGENDA *agenda, int dia, int mes, int ano);

void remove_dia(AGENDA *agenda, DIA *found_dia);

void change_dia_info(DIA *found_dia, int dia, int mes, int ano);

void sort_dias(AGENDA *found_agenda);

void print_dias(const AGENDA *found_agenda);

/*----------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------[EVENTOS]---------------------------------------------------*/

LISTA_EVENTOS *create_lista_eventos(void);

void insert_evento(DIA *found_dia, int id_evento, char *nome, int hospede_id, int dia_inicio, int dia_fim);

EVENTO *find_evento(const DIA *found_dia, int id_evento);

void remove_evento(DIA *found_dia, EVENTO *found_evento);

void change_evento_info(DIA *found_dia, EVENTO *found_evento, char *nome, int hospede_id, int dia_inicio, int dia_fim);

void print_eventos(const DIA *found_dia);

/*----------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------[--]---------------------------------------------------*/
/*----------------------------------------------------------------------------------------------------------------*/

#endif //PROJETO_LP_PROJECT_H
