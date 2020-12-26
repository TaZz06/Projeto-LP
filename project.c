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
   /* insert_estudio_ordered(findEd, 123, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 113, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 132, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 128, T0, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 127, T1, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 155, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 129, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 111, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 145, T4, 3, 50, 600, 0, 120);*/
   ESTUDIO *found_estudio = find_estudio(findEd, 121);
    insert_agenda(found_estudio, "Aaster", 30);
    insert_agenda(found_estudio, "Baster", 30);
    insert_agenda(found_estudio, "Caster", 30);
    insert_agenda(found_estudio, "Daster", 30);
    insert_agenda(found_estudio, "Taster", 30);
    insert_agenda(found_estudio, "Gaster", 30);
    insert_agenda(found_estudio, "Faster", 30);
    insert_agenda(found_estudio, "Raster", 30);
    insert_agenda(found_estudio, "Easter", 30);
    insert_agenda(found_estudio, "Jaster", 30);

    print_agendas(found_estudio);
    AGENDA *found_agenda = find_agenda(found_estudio, 2);
    printf("%s\n", found_agenda->plataforma);
    // findEd = find_edificio(le, 3);

    // change_edificio_info(le, findEd, "g", 0.1,0.3);
    //print_coisas(le);

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
    if(lista_edificios->pedificios == found_edificio){ //Primeiro
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
    ARRAY_ESTUDIOS *parray_estudios = (ARRAY_ESTUDIOS*)calloc(1, sizeof(ARRAY_ESTUDIOS));
    parray_estudios->size_estudios = initsize;
    parray_estudios->n_estudios = 0;
    parray_estudios->pestudios = (ESTUDIO*)calloc(initsize, sizeof(ESTUDIO));
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
            pestudio += old_size;
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

ESTUDIO *find_estudio(const EDIFICIO *found_edificio, int numero_porta) {
    ESTUDIO *estudio = found_edificio->estudios.pestudios;
    while (estudio != NULL) {
        if (estudio->numero_porta == numero_porta) return estudio;
        estudio++;
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

/**------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[AGENDAS]---------------------------------------------------*/

ARRAY_AGENDAS *create_dynarray_agendas(int initsize) {
    ARRAY_AGENDAS *parray_agendas = (ARRAY_AGENDAS *) calloc(1, sizeof(ARRAY_AGENDAS));
    parray_agendas->size_agendas = initsize;
    parray_agendas->pagendas = (AGENDA*)calloc(100, sizeof(AGENDA)); //Todo Este caralho <-

    return parray_agendas;
}

void insert_agenda(ESTUDIO *found_estudio, char plataforma[], int size_dias) {
    ARRAY_AGENDAS *arrayAgendas = &found_estudio->agendas;
    AGENDA *pagenda = arrayAgendas->pagendas;
    for (int i = 0; i < arrayAgendas->size_agendas; i++) {
        if (arrayAgendas->n_agendas == arrayAgendas->size_agendas) {
            int old_size = arrayAgendas->size_agendas;
            int new_size = old_size * 5; //Todo arranjar esta merda de oldsize ou o NumOfElements do calloc em cima, onde esta o caralho.
            pagenda = (AGENDA *) realloc(pagenda, new_size * sizeof(AGENDA));
            arrayAgendas->size_agendas = new_size;
        }
        if (arrayAgendas->n_agendas == 0){
            pagenda->id_agenda = id_agendas++;
            pagenda->plataforma = plataforma;
            ARRAY_DIAS *arrayDias = create_dynarray_dias(size_dias);
            pagenda->dias = *arrayDias;
            arrayAgendas->n_agendas++;
            return;
        }
        pagenda++;
        if (pagenda->id_agenda == 0 && arrayAgendas->n_agendas != 0){
            pagenda->id_agenda = id_agendas++;
            pagenda->plataforma = plataforma;
            ARRAY_DIAS *arrayDias = create_dynarray_dias(size_dias);
            pagenda->dias = *arrayDias;
            arrayAgendas->n_agendas++;
            return;
        }

    }
}

AGENDA *find_agenda(const ESTUDIO *found_estudio, int id_agenda){
    AGENDA *agenda = found_estudio->agendas.pagendas;
    while (agenda != NULL) {
        if (agenda->id_agenda == id_agenda) return agenda;
        agenda++;
    }
    return NULL;
}

void print_agendas(const ESTUDIO *found_estudio) {
    AGENDA *agenda = found_estudio->agendas.pagendas;
    for (int j = 0; j < found_estudio->agendas.n_agendas; j++) {
        printf("Id: %d Plataforma: %s\n", agenda->id_agenda, agenda->plataforma);
        agenda++;
    }
}

/**------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[DIAS]---------------------------------------------------*/

ARRAY_DIAS *create_dynarray_dias(int initsize) {
    ARRAY_DIAS *parray_dias = (ARRAY_DIAS *) calloc(1, sizeof(ARRAY_DIAS));
    parray_dias->size_dias = initsize;
    parray_dias->n_dias = 0;
    parray_dias->dias = (DIA *) calloc(initsize, sizeof(DIA));

    return parray_dias;
}