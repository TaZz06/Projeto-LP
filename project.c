//
//Projeto realizado por:
//João Melo (40155)
//Ricardo Pinheiro (40108)
//

#include "project.h"

int id_edificios = 0;
int id_estudios = 0;

int main_project(int argc, const char *argv[]) {
    int size = 10;
    LISTA_EDIFICIOS *le = create_lista_edificios();
    insert_edificio_ordered(le, "f", -12, 3, size);
    insert_edificio_ordered(le, "o", -125453, 434125, size);
    insert_edificio_ordered(le, "k", -13213, 478785, size);
    insert_edificio_ordered(le, "z", -123, 495, size);
    insert_edificio_ordered(le, "a", -0.4, 90, size);
    insert_edificio_ordered(le, "b", -0.04, 56, size);

    print_edificios(le);


    EDIFICIO *findEd = find_edificio(le, 1);
    insert_estudio_ordered(findEd, 121, T0, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 122, T1, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 123, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 124, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 125, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 126, T0, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 127, T1, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 128, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 129, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 130, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd, 131, T4, 3, 50, 600, 0, 120);
    print_estudios(findEd);
    //printf("Morada: %s\n", findEd->edf_morada);
    //remove_edificio_ordered(le, findEd);
    //print_coisas(le);
    // findEd = find_edificio(le, 3);
    // change_edificio_info(le, findEd, "g", 0.1,0.3);
    //print_coisas(le);

    return 0;
}

LISTA_EDIFICIOS *create_lista_edificios(void) {
    LISTA_EDIFICIOS *le = (LISTA_EDIFICIOS *) calloc(1, sizeof(LISTA_EDIFICIOS));
    le->pedificios = NULL;
    return le;
}

void insert_edificio_ordered(LISTA_EDIFICIOS *lista_edificios, char morada_edificio[], float latitude, float longitude,
                             int size_estudios) {
    EDIFICIO *e = (EDIFICIO *) calloc(1, sizeof(EDIFICIO));
    e->id_edificio = id_edificios++;
    e->edf_morada = (char *) malloc(sizeof(char) * strlen(morada_edificio) + 1);
    strcpy(e->edf_morada, morada_edificio);
    e->latitude = latitude;
    e->longitude = longitude;
    ARRAY_ESTUDIOS *ea = create_dynarray_estudios(e, size_estudios);
    e->estudios = *ea;
    e->edf_next = NULL;

    EDIFICIO *ppre = NULL, *pcur = lista_edificios->pedificios;
    while (pcur != NULL && strcmp(morada_edificio, pcur->edf_morada) > 0) {
        ppre = pcur;
        pcur = pcur->edf_next;
    }
    if (pcur == lista_edificios->pedificios) {
        e->edf_next = lista_edificios->pedificios;
        lista_edificios->pedificios = e;
        lista_edificios->n_edificios++;
        return;
    }
    e->edf_next = pcur;
    ppre->edf_next = e;
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

void remove_edificio_ordered(LISTA_EDIFICIOS *lista_edificios, EDIFICIO *found_edificio) {
    EDIFICIO *ppre = NULL, *pcur = lista_edificios->pedificios;
    while (pcur != found_edificio && pcur != NULL) {
        ppre = pcur;
        pcur = pcur->edf_next;
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

ARRAY_ESTUDIOS *create_dynarray_estudios(EDIFICIO *pedf, int initsize) {
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
        if (pestudio->preco_dia == 0) {
            pestudio->id_estudio = id_estudios++;
            pestudio->numero_porta = porta;
            strcpy(pestudio->config, config);
            pestudio->preco_dia = p_dia;
            pestudio->preco_mensal = p_mes;
            pestudio->preco_final = p_final;
            pestudio->area = area;
            edificio->estudios.n_estudios++;
            return;
        }
        pestudio++;
    }
    if (i == edificio->estudios.size_estudios) {
        int old_size = edificio->estudios.size_estudios;
        int new_size = old_size + 10;
        edificio->estudios.pestudios = (ESTUDIO *) realloc(edificio->estudios.pestudios, new_size * sizeof(ESTUDIO));
        edificio->estudios.size_estudios = new_size;
        for (i = old_size; i < new_size; ++i) {
            pestudio->numero_porta = 0;
            strcpy(pestudio->config, EMPTY);
            pestudio->preco_dia = 0.0f;
            pestudio->preco_mensal = 0.0f;
            pestudio->preco_final = 0.0f;
            pestudio->area = 0;
        }
        pestudio = edificio->estudios.pestudios + old_size;
        pestudio->id_estudio = id_estudios++;
        pestudio->numero_porta = porta;
        strcpy(pestudio->config, config);
        pestudio->preco_dia = p_dia;
        pestudio->preco_mensal = p_mes;
        pestudio->preco_final = p_final;
        pestudio->area = area;
        edificio->estudios.n_estudios++;
    }
}

void print_estudios(EDIFICIO *found_edificio) {
    ESTUDIO *a = found_edificio->estudios.pestudios;
    for (int j = 0; j < found_edificio->estudios.n_estudios; j++) {
        printf("ID: %d PORTA: %d CONFIG: %s PRECO_DIA: %.3f PRECO_MES: %.3f PRECO_FINAL: %.3f AREA: %d\n",
               a->id_estudio,
               a->numero_porta, a->config, a->preco_dia, a->preco_mensal, a->preco_final, a->area);
        a++;
    }
}