//
//Projeto realizado por:
//João Melo (40155)
//Ricardo Pinheiro (40108)
//

#include "project.h"

int id_edificios = 0;
int id_estudios = 0;
int id_agendas = 0;

int main_project(int argc, const char *argv[]) {
    int size = 10;

    LISTA_EDIFICIOS *le = create_lista_edificios();
    insert_edificio_ordered(le, "f", -12, 3, size);
    insert_edificio_ordered(le, "o", -125453, 434125, size);
    insert_edificio_ordered(le, "k", -13213, 478785, size);
    insert_edificio_ordered(le, "z", -123, 495, size);
    insert_edificio_ordered(le, "a", -0.4, 90, size);
    insert_edificio_ordered(le, "b", -0.04, 56, size);
    //print_edificios(le);

    EDIFICIO *findEd = find_edificio(le, 1);
    insert_estudio_ordered(findEd, 121, T0, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 122, T1, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 123, T2, 3, 50, 600, 0, 120);
    /*insert_estudio_ordered(findEd, 113, T4, 3, 50, 600, 0, 120);
     insert_estudio_ordered(findEd, 132, T4, 3, 50, 600, 0, 120);
     insert_estudio_ordered(findEd, 128, T0, 3, 50, 600, 0, 120);
     insert_estudio_ordered(findEd, 127, T1, 3, 50, 600, 0, 120);
     insert_estudio_ordered(findEd, 155, T2, 3, 50, 600, 0, 120);
     insert_estudio_ordered(findEd, 129, T4, 3, 50, 600, 0, 120);
     insert_estudio_ordered(findEd, 111, T2, 3, 50, 600, 0, 120);
     insert_estudio_ordered(findEd, 145, T4, 3, 50, 600, 0, 120);*/
    ESTUDIO *found_estudio = find_estudio(findEd, findEd->estudios.n_estudios, 121);
    //change_estudio_info(findEd, found_estudio, 133, T3, 4, 60, 200, 10, 130);
    print_estudios(findEd);

    //save_edificios_txt(le, "D:\\ProgramacaoGit\\GitHub\\Projeto-LP\\ficheirostxt\\arquivoEdificio.txt");

    insert_agenda(found_estudio, "Master", 3);
    /*insert_agenda(found_estudio, "Haster", 30);
    insert_agenda(found_estudio, "Naster", 30);
    insert_agenda(found_estudio, "Daster", 30);
    insert_agenda(found_estudio, "Kaster", 30);
    insert_agenda(found_estudio, "Taster", 30);
    insert_agenda(found_estudio, "Gaster", 30);
    insert_agenda(found_estudio, "Aaster", 30);
    insert_agenda(found_estudio, "Baster", 30);
    insert_agenda(found_estudio, "Easter", 30);
    insert_agenda(found_estudio, "Jaster", 30);*/

    //print_agendas(found_estudio);
    AGENDA *found_agenda = find_agenda(found_estudio, 0);
    /*printf("%s\n", found_agenda->plataforma);
    remove_agenda(found_estudio, found_agenda);
    print_agendas(found_estudio);
    printf("\n");*/
    insert_dia(found_agenda, 10, 03, 2022);
    insert_dia(found_agenda, 01, 01, 2021);
    insert_dia(found_agenda, 02, 01, 2021);
    insert_dia(found_agenda, 04, 02, 2022);
    insert_dia(found_agenda, 05, 1, 2021);
    print_dias(found_agenda);

    return 0;
}
/**------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[EDIFICIOS]---------------------------------------------------*/

LISTA_EDIFICIOS *create_lista_edificios(void) {
    LISTA_EDIFICIOS *le = (LISTA_EDIFICIOS *) calloc(1, sizeof(LISTA_EDIFICIOS));
    le->pedificios = NULL;
    return le;
}

void insert_edificio_ordered(LISTA_EDIFICIOS *lista_edificios, char morada_edificio[], float latitude, float longitude,
                             int size_estudios) {
    EDIFICIO *edificio = (EDIFICIO *) calloc(1, sizeof(EDIFICIO));
    edificio->id_edificio = id_edificios++;
    edificio->edf_morada = (char *) malloc(sizeof(char) * strlen(morada_edificio) + 1);
    strcpy(edificio->edf_morada, morada_edificio);
    edificio->latitude = latitude;
    edificio->longitude = longitude;
    ARRAY_ESTUDIOS *ea = create_dynarray_estudios(size_estudios);
    edificio->estudios = *ea;
    edificio->edf_next = NULL;

    EDIFICIO *ppre = NULL, *pcur = lista_edificios->pedificios;
    while (pcur != NULL && strcmp(morada_edificio, pcur->edf_morada) > 0) {
        ppre = pcur;
        pcur = pcur->edf_next;
    }
    if (pcur == lista_edificios->pedificios) {
        edificio->edf_next = lista_edificios->pedificios;
        lista_edificios->pedificios = edificio;
        lista_edificios->n_edificios++;
        return;
    }
    edificio->edf_next = pcur;
    ppre->edf_next = edificio;
    lista_edificios->n_edificios++;
}

EDIFICIO *find_edificio(const LISTA_EDIFICIOS *lista_edificios, int id_edificio) {
    EDIFICIO *e = lista_edificios->pedificios;
    while (e != NULL) {
        if (e->id_edificio == id_edificio) return e;
        e = e->edf_next;
    }
    return NULL;
}

void remove_edificio_ordered(LISTA_EDIFICIOS *lista_edificios,
                             EDIFICIO *found_edificio) { //TODO DAR FREE NOS ESTUDIOS/AGENDAS/...
    EDIFICIO *ppre = NULL, *pcur = lista_edificios->pedificios;
    while (pcur != found_edificio && pcur != NULL) {
        ppre = pcur;
        pcur = pcur->edf_next;
    }
    if (lista_edificios->pedificios == found_edificio) { //Primeiro
        lista_edificios->pedificios = pcur->edf_next;
        lista_edificios->n_edificios--;
        free(pcur);
        return;
    }
    if (lista_edificios->pedificios->edf_next == found_edificio) {
        lista_edificios->pedificios->edf_next = pcur->edf_next;
        lista_edificios->n_edificios--;
        free(pcur);
        return;
    }
    ppre->edf_next = pcur->edf_next;
    free(pcur);
    lista_edificios->n_edificios--;
}

void
change_edificio_info(LISTA_EDIFICIOS *lista_edificios, EDIFICIO *found_edificio, char morada_edificio[], float latitude,
                     float longitude) {
    EDIFICIO *ppre = NULL, *pcur = lista_edificios->pedificios;
    while (pcur != NULL && pcur != found_edificio) {
        ppre = pcur;
        pcur = pcur->edf_next;
    }
    if (pcur == lista_edificios->pedificios) {
        lista_edificios->pedificios = pcur->edf_next;
        pcur = lista_edificios->pedificios;
    } else {
        ppre->edf_next = pcur->edf_next;
        ppre = NULL, pcur = lista_edificios->pedificios;
    }
    strcpy(found_edificio->edf_morada, morada_edificio);
    found_edificio->latitude = latitude;
    found_edificio->longitude = longitude;
    /*Colocar o edificio alterado na posição correta, na lista, tendo em conta a  morada*/
    while (pcur != NULL && strcmp(morada_edificio, pcur->edf_morada) > 0) {
        ppre = pcur;
        pcur = pcur->edf_next;
    }
    if (pcur == lista_edificios->pedificios) {
        found_edificio->edf_next = lista_edificios->pedificios;
        lista_edificios->pedificios = found_edificio;
        return;
    }
    found_edificio->edf_next = pcur;
    ppre->edf_next = found_edificio;
}

void save_edificios_txt(LISTA_EDIFICIOS *listaEdificios, char filename[]) {
    FILE *arquivoEdificios = NULL;

    if ((arquivoEdificios = fopen(filename, "w")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }
    for (int i = 0; i < listaEdificios->n_edificios; i++) {
        EDIFICIO *findEd = find_edificio(listaEdificios, i);
        fprintf(arquivoEdificios,
                "Id: %d | Morada: %s | Latitude: %.3f | Longitude: %.3f\n",
                findEd->id_edificio,
                findEd->edf_morada, findEd->latitude, findEd->longitude);
        ESTUDIO *a = findEd->estudios.pestudios;
        for(int j = 0; j <findEd->estudios.n_estudios; j++){
            fprintf(arquivoEdificios, "\tID: %d | PORTA: %d | CONFIG: %s | PRECO_DIA: %.3f | PRECO_MES: %.3f | PRECO_FINAL: %.3f | AREA: %d\n", a->id_estudio,
                    a->numero_porta, a->config, a->preco_dia, a->preco_mensal, a->preco_final, a->area);
            a++;
        }
        findEd = findEd->edf_next;
    }
    fclose(arquivoEdificios);
    printf("Sucesso\n");
}

void print_edificios(LISTA_EDIFICIOS *listaEdificios) {
    EDIFICIO *aux = listaEdificios->pedificios;
    printf("N edificios %d\n", listaEdificios->n_edificios);
    while (aux != NULL) {
        printf("Id: %d Morada: %s Latitude: %.3f Longitude: %.3f\n", aux->id_edificio, aux->edf_morada, aux->latitude,
               aux->longitude);
        aux = aux->edf_next;
    }
}

/**------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[ESTUDIOS]---------------------------------------------------*/

ARRAY_ESTUDIOS *create_dynarray_estudios(int initsize) {
    ARRAY_ESTUDIOS *parray_estudios = (ARRAY_ESTUDIOS *) calloc(1, sizeof(ARRAY_ESTUDIOS));
    parray_estudios->size_estudios = initsize;
    parray_estudios->n_estudios = 0;
    parray_estudios->pestudios = (ESTUDIO *) calloc(initsize, sizeof(ESTUDIO));
    return parray_estudios;
}

void insert_estudio_ordered(EDIFICIO *edificio, int porta, char config[MAXCONFIG], int size_agendas, float p_dia,
                            float p_mes, float p_final, int area) {
    int i;
    ESTUDIO *pestudio = edificio->estudios.pestudios;
    for (i = 0; i < edificio->estudios.size_estudios; i++) {

        if (edificio->estudios.n_estudios == edificio->estudios.size_estudios) {
            int old_size = edificio->estudios.size_estudios;
            int new_size = old_size + 10;
            edificio->estudios.pestudios = (ESTUDIO *) realloc(pestudio, new_size * sizeof(ESTUDIO));
            edificio->estudios.size_estudios = new_size;
            pestudio = edificio->estudios.pestudios + old_size;
        }

        if (pestudio->numero_porta == 0) {
            pestudio->id_estudio = id_estudios++;
            pestudio->numero_porta = porta;
            strcpy(pestudio->config, config);
            pestudio->preco_dia = p_dia;
            pestudio->preco_mensal = p_mes;
            pestudio->preco_final = p_final;
            pestudio->area = area;
            ARRAY_AGENDAS *arrayAgendas = create_dynarray_agendas(size_agendas);
            pestudio->agendas = *arrayAgendas;
            edificio->estudios.n_estudios++;
            sort_estudios(edificio);
            return;
        }
        pestudio++;
    }
}

void sort_estudios(EDIFICIO *edificio) {
    int i, j;
    ESTUDIO *EdfEstudios = edificio->estudios.pestudios;
    for (i = 0; i < edificio->estudios.n_estudios; i++) {
        ESTUDIO key = EdfEstudios[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && EdfEstudios[j].numero_porta > key.numero_porta) {
            EdfEstudios[j + 1] = EdfEstudios[j];
            j = j - 1;
        }
        EdfEstudios[j + 1] = key;
    }
}

ESTUDIO *find_estudio(const EDIFICIO *found_edificio, int n, int numero_porta) {
    ESTUDIO *estudio = found_edificio->estudios.pestudios;
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (numero_porta < estudio[mid].numero_porta) hi = mid - 1;
        else if (numero_porta > estudio[mid].numero_porta) lo = mid + 1;
        else return &estudio[mid];
    }
    return NULL;
}

void remove_estudio_ordered(EDIFICIO *found_edificio, ESTUDIO *found_estudio) {
    int i = 0;
    while (i != found_edificio->estudios.n_estudios) {
        *found_estudio = *(found_estudio + 1);
        found_estudio++;
        i++;
    }
    if (i == found_edificio->estudios.n_estudios) {
        found_estudio->numero_porta = 0;
        strcpy(found_estudio->config, EMPTY);
        found_estudio->preco_dia = 0.0f;
        found_estudio->preco_mensal = 0.0f;
        found_estudio->preco_final = 0.0f;
        found_estudio->area = 0;
    }
    found_edificio->estudios.n_estudios--;
}

void
change_estudio_info(EDIFICIO *edificio, ESTUDIO *found_estudio, int porta, char config[MAXCONFIG], int size_agendas,
                    float p_dia,
                    float p_mes, float p_final, int area) {
    found_estudio->numero_porta = porta;
    strcpy(found_estudio->config, config);
    found_estudio->preco_dia = p_dia;
    found_estudio->preco_mensal = p_mes;
    found_estudio->preco_final = p_final;
    found_estudio->area = area;
    sort_estudios(edificio);
    return;
}

void print_estudios(const EDIFICIO *found_edificio) {
    ESTUDIO *a = found_edificio->estudios.pestudios;
    int j;
    for (j = 0; j < found_edificio->estudios.n_estudios; j++) {
        printf("ID: %d PORTA: %d CONFIG: %s PRECO_DIA: %.3f PRECO_MES: %.3f PRECO_FINAL: %.3f AREA: %d\n",
               a->id_estudio,
               a->numero_porta, a->config, a->preco_dia, a->preco_mensal, a->preco_final, a->area);
        a++;
    }
}

/**------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[AGENDAS]---------------------------------------------------*/

ARRAY_AGENDAS *create_dynarray_agendas(int initsize) {
    ARRAY_AGENDAS *parray_agendas = (ARRAY_AGENDAS *) calloc(1, sizeof(ARRAY_AGENDAS));
    parray_agendas->size_agendas = initsize;
    parray_agendas->n_agendas = 0;
    parray_agendas->pagendas = (AGENDA *) calloc(initsize, sizeof(AGENDA));
    return parray_agendas;
}

void insert_agenda(ESTUDIO *found_estudio, char plataforma[], int size_dias) {
    ARRAY_AGENDAS *arrayAgendas = &found_estudio->agendas;
    AGENDA *pagenda = arrayAgendas->pagendas;

    for (int i = 0; i <= arrayAgendas->size_agendas; i++) {
        if (arrayAgendas->n_agendas == arrayAgendas->size_agendas) {
            int oldsize = arrayAgendas->size_agendas;
            int newsize = oldsize * 2;
            pagenda = (AGENDA *) realloc(pagenda, newsize * sizeof(AGENDA));
            arrayAgendas->size_agendas = newsize;
            arrayAgendas->pagendas = pagenda;
        }
        if (pagenda->plataforma == NULL) {
            pagenda->id_agenda = id_agendas++;
            pagenda->plataforma = (char *) malloc(strlen(plataforma) + 1);
            strcpy(pagenda->plataforma, plataforma);
            ARRAY_DIAS *arrayDias = create_dynarray_dias(size_dias);
            pagenda->dias = *arrayDias;
            arrayAgendas->n_agendas++;
            sort_agendas(found_estudio);
            return;
        }
        pagenda++;
    }
}

void remove_agenda(ESTUDIO *estudio, AGENDA *found_agenda) {//Todo Libertar array de dias
    ARRAY_AGENDAS *arrayAgendas = &estudio->agendas;
    int i = 0;
    while (i != arrayAgendas->size_agendas) {
        *found_agenda = *(found_agenda + 1);
        found_agenda++;
        i++;
    }
    if (i == arrayAgendas->n_agendas) {
        found_agenda->id_agenda = 0;
        strcpy(found_agenda->plataforma, NULL);
    }
    arrayAgendas->n_agendas--;
}

void change_agenda_info(ESTUDIO *found_estudio, AGENDA *found_agenda, char plataforma[]) {
    strcpy(found_agenda->plataforma, plataforma);
    sort_agendas(found_estudio);
    return;
}

AGENDA *find_agenda(const ESTUDIO *found_estudio, int id_agenda) {
    AGENDA *agenda = found_estudio->agendas.pagendas;
    while (agenda != NULL) {
        if (agenda->id_agenda == id_agenda) return agenda;
        agenda++;
    }
    return NULL;
}

void sort_agendas(ESTUDIO *found_estudio) {
    int i, j;
    ARRAY_AGENDAS *arrayAgendas = &found_estudio->agendas;
    AGENDA *agenda = arrayAgendas->pagendas;
    for (i = 0; i < arrayAgendas->n_agendas; i++) {
        AGENDA key = agenda[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && strcmp(agenda[j].plataforma, key.plataforma) > 0) {
            agenda[j + 1] = agenda[j];
            j = j - 1;
        }
        agenda[j + 1] = key;
    }
}

void print_agendas(const ESTUDIO *found_estudio) {
    AGENDA *agenda = found_estudio->agendas.pagendas;
    for (int i = 0; i < found_estudio->agendas.n_agendas; i++) {
        printf("Id: %d Plataforma: %s\n", agenda->id_agenda, agenda->plataforma);
        agenda++;
    }
}

/**------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[DIAS]---------------------------------------------------*/

ARRAY_DIAS *create_dynarray_dias(int initsize) {
    ARRAY_DIAS *parray_dias = (ARRAY_DIAS *) calloc(1, sizeof(ARRAY_DIAS));
    parray_dias->dias = (DIA *) calloc(initsize, sizeof(DIA));
    parray_dias->size_dias = initsize;

    return parray_dias;
}

void insert_dia(AGENDA *found_agenda, int dia, int mes, int ano) {
    DIA *pdia = found_agenda->dias.dias;
    ARRAY_DIAS *arrayDias = &found_agenda->dias;
    int i;
    for (i = 0; i <= found_agenda->dias.size_dias; i++) {
        if (arrayDias->n_dias == arrayDias->size_dias) {
            int oldsize = arrayDias->size_dias;
            int newsize = oldsize * 2;
            pdia = (DIA *) realloc(pdia, newsize * sizeof(DIA));
            arrayDias->size_dias = newsize;
            arrayDias->dias = pdia;
        }
        if (pdia->dia == 0) {
            pdia->dia = dia;
            pdia->mes = mes;
            pdia->ano = ano;
            LISTA_EVENTOS * listaEventos = create_lista_eventos();
            pdia->eventos = *listaEventos;
            arrayDias->n_dias++;
            sort_dias(found_agenda);
            return;
        }
        pdia++;
    }
}


void sort_dias(AGENDA *found_agenda) {
    int i, j;
    ARRAY_DIAS *arrayDias = &found_agenda->dias;
    DIA *dia = arrayDias->dias;
    for (i = 0; i < arrayDias->n_dias; i++) {
        DIA key = dia[i];
        j = i - 1;
        while (j >= 0 && dia[j].dia > key.dia && dia[j].mes > key.mes && dia[j].ano > key.ano) {
            dia[j + 1] = dia[j];
            j = j - 1;
        }
        dia[j + 1] = key;
    }
}

void print_dias(const AGENDA *found_agenda) {
    DIA *dia = found_agenda->dias.dias;
    for (int i = 0; i < found_agenda->dias.n_dias; i++) {
        printf("DIA:%d MES:%d ANO:%d\n", dia->dia, dia->mes, dia->ano);
        dia++;
    }
}

/**------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[EVENTOS]---------------------------------------------------*/

LISTA_EVENTOS *create_lista_eventos(void) {
    LISTA_EVENTOS *leventos = (LISTA_EVENTOS *) calloc(1, sizeof(LISTA_EVENTOS));
    leventos->peventos = NULL;
    return leventos;
}