//
//Projeto realizado por:
//João Melo (40155)
//Ricardo Pinheiro (40108)
//

#include "project.h"

int id_edificios = 0;

int main_project(int argc, const char *argv[]) {
    int size = 10;
    LISTA_EDIFICIOS *le = create_lista_edificios();
    insert_edificio_ordered(le, "o", size);
    insert_edificio_ordered(le, "d", size);
    insert_edificio_ordered(le, "a", size);
    insert_edificio_ordered(le, "f", size);

    print_coisas(le);

    EDIFICIO *findEd = find_edificio(le, 1);
    printf("Morada: %s\n", findEd->edf_morada);
    //remove_edificio_ordered(le, findEd);
    //print_coisas(le);

    findEd = find_edificio(le, 0);
    change_edificio_info(le, findEd, "g");
    print_coisas(le);


    return 0;
}

LISTA_EDIFICIOS *create_lista_edificios(void) {
    LISTA_EDIFICIOS *le = (LISTA_EDIFICIOS *) calloc(1, sizeof(LISTA_EDIFICIOS));
    le->pedificios = NULL;
    return le;
}

void insert_edificio_ordered(LISTA_EDIFICIOS *lista_edificios, char morada_edificio[], int size_estudios) {
    EDIFICIO *e = (EDIFICIO *) calloc(1, sizeof(EDIFICIO));
    e->id_edificio = id_edificios++;
    e->edf_morada = (char *) malloc(sizeof(char) * strlen(morada_edificio) + 1);
    strcpy(e->edf_morada, morada_edificio);
    ARRAY_ESTUDIOS ae = {0, size_estudios, NULL};
    e->estudios = ae;
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

void change_edificio_info(LISTA_EDIFICIOS *lista_edificios, EDIFICIO *found_edificio, char morada_edificio[]) {
    EDIFICIO *ppre = NULL, *pcur = lista_edificios->pedificios;
    while (pcur != NULL && pcur != found_edificio) {
        ppre = pcur;
        pcur = pcur->edf_next;
    }

    strcpy(found_edificio->edf_morada, morada_edificio);
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

void print_coisas(LISTA_EDIFICIOS *le) {
    EDIFICIO *aux = le->pedificios;
    while (aux != NULL) {
        printf("N edificios %d Id: %d Morada: %s\n", le->n_edificios, aux->id_edificio, aux->edf_morada);
        aux = aux->edf_next;
    }
}