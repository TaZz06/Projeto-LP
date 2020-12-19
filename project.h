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

typedef struct estadia {
    int dia_inicio;
    int dia_fim;
} ESTADIA;

typedef struct historico {
    int id_estudio;
    ESTADIA *estadia;
} HISTORICO;

typedef struct hospede {
    int id;
    int nome;
    HISTORICO *historico;
    struct hospede *phospede_next;
} HOSPEDE;

typedef struct lista_hospedes {
    int n_hospedes;
    HOSPEDE *phospedes;
} LISTA_HOSPEDES;

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
    DIA * dias;
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
    char config[2];
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
    EDIFICIO *pedificios;
} LISTA_EDIFICIOS;

int main_project(int argc, const char *argv[]);

#endif //PROJETO_LP_PROJECT_H
