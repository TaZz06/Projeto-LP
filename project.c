//
//Projeto realizado por:
//João Melo (40155)
//Ricardo Pinheiro (40108)
//

#include "project.h"

int id_edificios = 0;
int id_estudios = 0;
int id_agendas = 0;
int id_eventos = 0;
int id_hospedes = 0;

int main_project(int argc, const char *argv[]) {
    int size = 10;

    /*LISTA_EDIFICIOS *le = create_lista_edificios();
    insert_edificio_ordered(le, id_edificios, "f", -12.0, 3.0, size);
    insert_edificio_ordered(le, id_edificios, "o", -125453, 434125, size);
    insert_edificio_ordered(le, id_edificios, "k", -13213, 478785, size);
    insert_edificio_ordered(le, id_edificios, "z", -123, 495, size);
    insert_edificio_ordered(le, id_edificios, "a", -0.4, 90, size);
    insert_edificio_ordered(le, id_edificios, "b", -0.04, 56, size);
    print_edificios(le);

    insert_estudio_ordered(le, 1, id_estudios, 121, T0, 3, 50, 600, 0, 120);
    insert_estudio_ordered(le, 1, id_estudios, 122, T1, 3, 50, 600, 0, 120);
    insert_estudio_ordered(le, 1, id_estudios, 123, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(le, 1, id_estudios, 113, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(le, 1, id_estudios, 132, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(le, 1, id_estudios, 128, T0, 3, 50, 600, 0, 120);
    insert_estudio_ordered(le, 2, id_estudios, 127, T1, 3, 50, 600, 0, 120);
    insert_estudio_ordered(le, 3, id_estudios, 155, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(le, 2, id_estudios, 129, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(le, 3, id_estudios, 111, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(le, 2, id_estudios, 145, T4, 3, 50, 600, 0, 120);
    print_estudios(le, 1);*/


    char file_EdfEst_TXT[] = "../data/ficheirostxt/EdfEst_TXT.txt";
    char file_EdfEst_BIN[] = "../data/ficheirosbin/EdfEst_BIN.txt";
    //save_edificios_txt(le, file_EdfEst_TXT);
    //read_edificios_txt(le, file_EdfEst_TXT);
    //save_edificios_bin(le, file_EdfEst_BIN);
    //read_edificios_bin(le, file_EdfEst_BIN);

    char file_AgendaEv_TXT[] = "../data/ficheirostxt/AgendaEv_TXT.txt";
    char file_AgendaEv_BIN[] = "../data/ficheirosbin/AgendaEv_BIN.txt";

    //read_eventos_bin(le, file_AgendaEv_BIN);

    //print_edificios(le);
    /* EDIFICIO *findEd = find_edificio(le, 0);
     //print_estudios(findEd);

    ESTUDIO *found_estudio = binary_search_estudio(le, 1, 121);
    insert_agenda(found_estudio, id_agendas, "Master", 3);
    insert_agenda(found_estudio, id_agendas, "AirBnA", 3);
    insert_agenda(found_estudio, id_agendas, "AirBnB", 3);
    insert_agenda(found_estudio, id_agendas, "AirBnC", 3);
    //print_agendas(found_estudio);

     AGENDA *found_agenda = find_agenda(found_estudio, 2);
     insert_dia(found_agenda, 10, 03, 2022);
     insert_dia(found_agenda, 1, 01, 2021);
     insert_dia(found_agenda, 2, 01, 2021);
     insert_dia(found_agenda, 4, 02, 2022);
     insert_dia(found_agenda, 5, 1, 2021);
     insert_dia(found_agenda, 9, 03, 2022);
     insert_dia(found_agenda, 12, 01, 2021);
     insert_dia(found_agenda, 14, 01, 2021);
     insert_dia(found_agenda, 20, 02, 2022);
     insert_dia(found_agenda, 30, 1, 2020);
     //print_dias(found_agenda);

     DIA *found_dia = find_dia(found_agenda, 30, 1, 2020);
     insert_evento(found_dia, id_eventos, "Manuntencao", -1, 3, 5);
     insert_evento(found_dia, id_eventos, "Estadia", 5, 7, 3);
     insert_evento(found_dia, id_eventos, "Limpeza", -1, 5, 4);
     insert_evento(found_dia, id_eventos, "Reuniao", 2, 31, 9);
     insert_evento(found_dia, id_eventos, "Limpeza", -1, 30, 10);
     insert_evento(found_dia, id_eventos, "Estadia", 1, 29, 11);
     insert_evento(found_dia, id_eventos, "Manuntencao", -1, 11, 12);
     print_eventos(found_dia);*/

    //EVENTO *found_evento = find_evento(found_dia, 2);
    //printf("%s\n", found_evento->nome);
    //print_eventos(found_dia);
    /*remove_evento(found_dia, found_evento);
    print_eventos(found_dia);*/
    //change_evento_info(found_dia, found_evento, "nhonho", 666, 69, 30);


    //read_eventos_txt(le, file_AgendaEv_TXT);
    //save_eventos_txt(le, file_AgendaEv_TXT);
    //save_eventos_bin(le, file_AgendaEv_BIN);

    /*LISTA_HOSPEDES *lh = create_lista_hospedes();
    insert_hospedes_ordered(lh, id_hospedes, "Filipe Nogueira");
    insert_hospedes_ordered(lh, id_hospedes, "Luis Gouveia");
    insert_hospedes_ordered(lh, id_hospedes, "Carlos Ferreira");
    insert_hospedes_ordered(lh, id_hospedes, "Ze Carlos");
    insert_hospedes_ordered(lh, id_hospedes, "Nelo Chapeiro");
    insert_hospedes_ordered(lh, id_hospedes, "Ana Malhoa");
    //print_hospedes(lh);
    //HOSPEDE *found_hospede = find_hospede(lh, 4);
    //printf("%d %s\n", found_hospede->id, found_hospede->nome);
    //remove_hospede_ordered(lh, found_hospede);
    //change_hospede_info(lh, found_hospede, "Tony do Rock");
    historico_estadias(le, lh);*/


    ARRAY_PLATAFORMAS *arrayPlataformas = create_dynarray_plataformas(3);
    /*insert_plataforma_politica(arrayPlataformas, "p1", "Configuracao", 3);
    insert_plataforma_politica(arrayPlataformas, "p0", "Duracao", 3);
    insert_plataforma_politica(arrayPlataformas, "p2", "Epoca", 3);
    insert_plataforma_politica(arrayPlataformas, "p3", "Modalidade", 3);
    insert_plataforma_politica(arrayPlataformas, "p4", "Ocupacao", 3);
    print_plataforma_politica(arrayPlataformas);
    printf("\n");
    //remove_plataforma_politica(arrayPlataformas, "p2");
    //print_plataforma_politica(arrayPlataformas);
    PLATAFORMA *pl = find_plataforma(arrayPlataformas, "p1");
    //printf("%s", pl->nome);

    insert_regra(pl->politica, "T0", 0.1);
    insert_regra(pl->politica, "T1", 0.2);
    insert_regra(pl->politica, "T2", 0.3);
    insert_regra(pl->politica, "T3", 0.4);
    print_regras(pl->politica);*/

    char file_PoliticaRegra_TXT[] = "../data/ficheirostxt/PoliticaRegra_TXT.txt";
    char file_PoliticaRegra_BIN[] = "../data/ficheirosbin/PoliticaRegra_BIN.txt";

    //save_plataformas_txt(arrayPlataformas, file_PoliticaRegra_TXT);
    //save_plataformas_bin(arrayPlataformas, file_PoliticaRegra_BIN);

    /*read_plataformas_txt(arrayPlataformas, file_PoliticaRegra_TXT);
    read_plataformas_bin(arrayPlataformas, file_PoliticaRegra_BIN);
    PLATAFORMA *pl = find_plataforma(arrayPlataformas, "p1");
    print_plataforma_politica(arrayPlataformas);
    print_regras(pl->politica);*/

    return 0;
}
/*-------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[EDIFICIOS]---------------------------------------------------*/

LISTA_EDIFICIOS *create_lista_edificios(void) {
    LISTA_EDIFICIOS *le = (LISTA_EDIFICIOS *) calloc(1, sizeof(LISTA_EDIFICIOS));
    le->pedificios = NULL;
    return le;
}

void insert_edificio_ordered(LISTA_EDIFICIOS *lista_edificios, int id_edificio, char morada_edificio[], float latitude,
                             float longitude, float preco_m2,
                             int size_estudios) {
    EDIFICIO *edificio = (EDIFICIO *) calloc(1, sizeof(EDIFICIO));
    id_edificios++;
    edificio->id_edificio = id_edificio;
    edificio->edf_morada = (char *) malloc(sizeof(char) * strlen(morada_edificio) + 1);
    strcpy(edificio->edf_morada, morada_edificio);
    edificio->latitude = latitude;
    edificio->longitude = longitude;
    edificio->preco_m2 = preco_m2;
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
                             int id_edificio) { //TODO DAR FREE NOS ESTUDIOS/AGENDAS/...
    EDIFICIO *found_edificio = find_edificio(lista_edificios, id_edificio);
    if (found_edificio == NULL) {
        printf("Edificio nao encontrado\n");
        return;
    }
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
change_edificio_info(LISTA_EDIFICIOS *lista_edificios, int id_edificio, char morada_edificio[], float latitude,
                     float longitude, float preco_m2) {
    EDIFICIO *found_edificio = find_edificio(lista_edificios, id_edificio);
    if (found_edificio == NULL) {
        printf("Edificio nao encontrado\n");
        return;
    }
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
    found_edificio->preco_m2 = preco_m2;
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
    fprintf(arquivoEdificios, "Numero de edificios: %d\n", listaEdificios->n_edificios);
    for (int i = 0; i < listaEdificios->n_edificios; i++) {
        EDIFICIO *ed = find_edificio(listaEdificios, listaEdificios->pedificios->id_edificio);
        fprintf(arquivoEdificios,
                "%d | %s | %.3f | %.3f | %.3f | %d\n",
                ed->id_edificio,
                ed->edf_morada, ed->latitude, ed->longitude, ed->preco_m2, ed->estudios.size_estudios);
        ESTUDIO *a = ed->estudios.pestudios;
        fprintf(arquivoEdificios, "\tNumero de estudios: %d\n", ed->estudios.n_estudios);
        for (int j = 0; j < ed->estudios.n_estudios; j++) {
            fprintf(arquivoEdificios, "\t\t%d | %d | %s | %d | %d\n", a->id_estudio,
                    a->numero_porta, a->config, a->agendas.size_agendas, a->area);
            a++;
        }
        listaEdificios->pedificios = listaEdificios->pedificios->edf_next;
    }
    fclose(arquivoEdificios);
    printf("Sucesso\n");
}

void
read_edificios_txt(LISTA_EDIFICIOS *listaEdificios, char filename[]) {
    FILE *arquivoEdificios;
    if ((arquivoEdificios = fopen(filename, "r")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }
    char aux1[200], aux2[20];
    float latitude = 0, longitude = 0, p_m2;
    int size, n1 = 0, n2 = 0, porta, area, id_edf, id_est;

    fscanf(arquivoEdificios, "%*[^:]:%d", &n1);
    while (arquivoEdificios != NULL && listaEdificios->n_edificios < n1) {
        fscanf(arquivoEdificios, "%d | %[^|] | %f | %f | %f | %d", &id_edf, aux1, &latitude, &longitude, &p_m2, &size);
        if (id_edf > id_edificios) {
            id_edificios = id_edf + 1;
        }
        id_edificios--;
        insert_edificio_ordered(listaEdificios, id_edf, aux1, latitude, longitude, p_m2, size);
        EDIFICIO *e = find_edificio(listaEdificios, id_edf);
        fscanf(arquivoEdificios, "%*[^:]:%d", &n2);
        while (arquivoEdificios != NULL && e->estudios.n_estudios < n2) {
            fscanf(arquivoEdificios, "%d | %d | %[^|] | %d | %d", &id_est, &porta, aux2, &size,
                   &area);
            if (id_est > id_estudios) {
                id_estudios = id_est + 1;
            }
            id_estudios--;
            insert_estudio_ordered(listaEdificios, id_edf, id_est, porta, aux2, size, area);
        }
    }
    fclose(arquivoEdificios);
}

void save_edificios_bin(LISTA_EDIFICIOS *listaEdificios, char filename[]) {
    FILE *fileEdfEst = NULL;

    if ((fileEdfEst = fopen(filename, "wb")) == NULL) {
        printf("Erro %s\n", filename);
        return;
    }
    fwrite(&listaEdificios->n_edificios, sizeof(int), 1, fileEdfEst);
    EDIFICIO *edf = find_edificio(listaEdificios, listaEdificios->pedificios->id_edificio);

    for (int i = 0; i < listaEdificios->n_edificios; i++) {
        fwrite(&edf->id_edificio, sizeof(int), 1, fileEdfEst);
        int size_morada = strlen(edf->edf_morada) + 1;
        fwrite(&size_morada, sizeof(int), 1, fileEdfEst);
        fwrite(edf->edf_morada, sizeof(char), size_morada, fileEdfEst);
        fwrite(&edf->latitude, sizeof(float), 1, fileEdfEst);
        fwrite(&edf->longitude, sizeof(float), 1, fileEdfEst);
        fwrite(&edf->preco_m2, sizeof(float), 1, fileEdfEst);
        fwrite(&edf->estudios.size_estudios, sizeof(int), 1, fileEdfEst);

        ESTUDIO *a = edf->estudios.pestudios;
        fwrite(&edf->estudios.n_estudios, sizeof(int), 1, fileEdfEst);
        for (int j = 0; j < edf->estudios.n_estudios; j++) {
            fwrite(&a->id_estudio, sizeof(int), 1, fileEdfEst);
            fwrite(&a->numero_porta, sizeof(int), 1, fileEdfEst);
            int size_config = strlen(a->config) + 1;
            fwrite(&size_config, sizeof(int), 1, fileEdfEst);
            fwrite(a->config, sizeof(char), size_config, fileEdfEst);
            fwrite(&a->agendas.size_agendas, sizeof(int), 1, fileEdfEst);
            fwrite(&a->area, sizeof(int), 1, fileEdfEst);
            a++;
        }
        edf = edf->edf_next;
    }
    fclose(fileEdfEst);
    printf("Sucesso\n");
}

void read_edificios_bin(LISTA_EDIFICIOS *listaEdificios, char filename[]) {
    FILE *fileEdfEst = NULL;
    if ((fileEdfEst = fopen(filename, "rb")) == NULL) {
        printf("Erro %s\n", filename);
        return;
    }
    int nEdf;
    fread(&nEdf, sizeof(int), 1, fileEdfEst);
    for (int i = 0; i < nEdf; ++i) {
        int id_edf = 0, size_morada = 0, size_estudios = 0, n_estudios = 0;
        float latitude = 0, longitude = 0, p_m2;
        char morada[200] = {};
        fread(&id_edf, sizeof(int), 1, fileEdfEst);
        fread(&size_morada, sizeof(int), 1, fileEdfEst);
        fread(morada, sizeof(char), size_morada, fileEdfEst);
        fread(&latitude, sizeof(float), 1, fileEdfEst);
        fread(&longitude, sizeof(float), 1, fileEdfEst);
        fread(&p_m2, sizeof(float), 1, fileEdfEst);
        fread(&size_estudios, sizeof(int), 1, fileEdfEst);

        insert_edificio_ordered(listaEdificios, id_edf, morada, latitude, longitude, p_m2, size_estudios);
        EDIFICIO *found_edf = find_edificio(listaEdificios, id_edf);
        fread(&n_estudios, sizeof(int), 1, fileEdfEst);
        for (int j = 0; j < n_estudios; ++j) {
            int idEst = 0, n_porta = 0, size_config = 0, size_agendas = 0, area = 0;
            float preco_dia = 0, preco_mes = 0, preco_final = 0;
            char config[3];
            fread(&idEst, sizeof(int), 1, fileEdfEst);
            fread(&n_porta, sizeof(int), 1, fileEdfEst);
            fread(&size_config, sizeof(int), 1, fileEdfEst);
            fread(config, sizeof(char), size_config, fileEdfEst);
            fread(&size_agendas, sizeof(int), 1, fileEdfEst);
            fread(&area, sizeof(int), 1, fileEdfEst);

            insert_estudio_ordered(listaEdificios, id_edf, idEst, n_porta, config, size_agendas, area);
        }
    }
    fclose(fileEdfEst);
    printf("Sucesso\n");
}

void print_edificios(LISTA_EDIFICIOS *listaEdificios) {
    EDIFICIO *aux = listaEdificios->pedificios;
    printf("N edificios %d\n", listaEdificios->n_edificios);
    while (aux != NULL) {
        printf("Id: %d Morada: %s Latitude: %.3f Longitude: %.3f Preco m2: %.3f\n", aux->id_edificio, aux->edf_morada,
               aux->latitude,
               aux->longitude, aux->preco_m2);
        aux = aux->edf_next;
    }
}

/*-------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[ESTUDIOS]---------------------------------------------------*/

ARRAY_ESTUDIOS *create_dynarray_estudios(int initsize) {
    ARRAY_ESTUDIOS *parray_estudios = (ARRAY_ESTUDIOS *) calloc(1, sizeof(ARRAY_ESTUDIOS));
    parray_estudios->size_estudios = initsize;
    parray_estudios->n_estudios = 0;
    parray_estudios->pestudios = (ESTUDIO *) calloc(initsize, sizeof(ESTUDIO));
    return parray_estudios;
}

void insert_estudio_ordered(LISTA_EDIFICIOS *lista_edificios, int id_edificio, int id_estudio, int porta,
                            char config[MAXCONFIG], int size_agendas,
                            int area) {
    EDIFICIO *edificio = find_edificio(lista_edificios, id_edificio);
    if (edificio == NULL) {
        printf("Edificio nao encontrado\n");
        return;
    }
    ESTUDIO *pestudio = edificio->estudios.pestudios;
    for (int i = 0; i < edificio->estudios.size_estudios; i++) {

        if (edificio->estudios.n_estudios == edificio->estudios.size_estudios) {
            int old_size = edificio->estudios.size_estudios;
            int new_size = old_size + 10;
            edificio->estudios.pestudios = (ESTUDIO *) realloc(pestudio, new_size * sizeof(ESTUDIO));
            edificio->estudios.size_estudios = new_size;
            pestudio = edificio->estudios.pestudios + old_size;
        }

        if (pestudio->numero_porta == 0) {
            id_estudios++;
            pestudio->id_estudio = id_estudio;
            pestudio->numero_porta = porta;
            strcpy(pestudio->config, config);
            pestudio->area = area;
            ARRAY_AGENDAS *arrayAgendas = create_dynarray_agendas(size_agendas);
            pestudio->agendas = *arrayAgendas;
            edificio->estudios.n_estudios++;
            sort_estudios(lista_edificios, id_edificio);
            return;
        }
        pestudio++;
    }
}

void sort_estudios(LISTA_EDIFICIOS *listaEdificios, int id_edificio) {
    EDIFICIO *edificio = find_edificio(listaEdificios, id_edificio);
    if (edificio == NULL) {
        printf("Edificio nao encontrado\n");
        return;
    }
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

ESTUDIO *binary_search_estudio(const LISTA_EDIFICIOS *listaEdificios, int id_edificio, int numero_porta) {
    EDIFICIO *found_edificio = find_edificio(listaEdificios, id_edificio);
    if (found_edificio == NULL) {
        printf("Edificio nao encontrado\n");
        return NULL;
    }
    ESTUDIO *estudio = found_edificio->estudios.pestudios;
    int lo = 0, hi = found_edificio->estudios.n_estudios - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (numero_porta < estudio[mid].numero_porta) hi = mid - 1;
        else if (numero_porta > estudio[mid].numero_porta) lo = mid + 1;
        else return &estudio[mid];
    }
    return NULL;
}

void remove_estudio_ordered(const LISTA_EDIFICIOS *listaEdificios, int id_edificio, int numero_porta) {
    EDIFICIO *found_edificio = find_edificio(listaEdificios, id_edificio);
    ESTUDIO *found_estudio = binary_search_estudio(listaEdificios, id_edificio, numero_porta);
    if (found_estudio == NULL) {
        printf("Estudio nao encontrado\n");
        return;
    }
    int i = 0;
    while (i != found_edificio->estudios.n_estudios) {
        *found_estudio = *(found_estudio + 1);
        found_estudio++;
        i++;
    }
    if (i == found_edificio->estudios.n_estudios) {
        found_estudio->numero_porta = 0;
        strcpy(found_estudio->config, EMPTY);
        found_estudio->area = 0;
    }
    found_edificio->estudios.n_estudios--;
}

void
change_estudio_info(LISTA_EDIFICIOS *listaEdificios, int id_edificio, int numero_porta, int porta,
                    char config[MAXCONFIG], int size_agendas,
                    int area) {
    EDIFICIO *edificio = find_edificio(listaEdificios, id_edificio);
    ESTUDIO *found_estudio = binary_search_estudio(listaEdificios, id_edificio, numero_porta);
    if (found_estudio == NULL) {
        printf("Estudio nao encontrado\n");
        return;
    }
    found_estudio->numero_porta = porta;
    strcpy(found_estudio->config, config);
    found_estudio->area = area;
    sort_estudios(listaEdificios, id_edificio);
}

void print_estudios(const LISTA_EDIFICIOS *listaEdificios, int id_edificio) {
    EDIFICIO *found_edificio = find_edificio(listaEdificios, id_edificio);
    if (found_edificio == NULL) {
        printf("Edificio nao encontrado\n");
        return;
    }
    ESTUDIO *a = found_edificio->estudios.pestudios;
    int j;
    for (j = 0; j < found_edificio->estudios.n_estudios; j++) {
        printf("\tID: %d PORTA: %d CONFIG: %s AREA: %d\n",
               a->id_estudio,
               a->numero_porta, a->config, a->area);
        a++;
    }
}

/*-------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[AGENDAS]---------------------------------------------------*/

ARRAY_AGENDAS *create_dynarray_agendas(int initsize) {
    ARRAY_AGENDAS *parray_agendas = (ARRAY_AGENDAS *) calloc(1, sizeof(ARRAY_AGENDAS));
    parray_agendas->size_agendas = initsize;
    parray_agendas->n_agendas = 0;
    parray_agendas->pagendas = (AGENDA *) calloc(initsize, sizeof(AGENDA));
    return parray_agendas;
}

void insert_agenda(ESTUDIO *found_estudio, int id_agenda, char plataforma[],
                   int size_dias) {//TODO ID AGENDA / ID GLOBAL ACERTO

    if (found_estudio != NULL) {
        if (found_estudio->agendas.n_agendas >= found_estudio->agendas.size_agendas) {
            found_estudio->agendas.size_agendas *= 2;
            found_estudio->agendas.pagendas = (AGENDA *) realloc(found_estudio->agendas.pagendas,
                                                                 found_estudio->agendas.size_agendas * sizeof(AGENDA));
        }
        AGENDA *pagenda = found_estudio->agendas.pagendas + found_estudio->agendas.n_agendas;
        id_agendas++;
        pagenda->id_agenda = id_agenda;
        pagenda->plataforma = (char *) malloc(strlen(plataforma) + 1);
        strcpy(pagenda->plataforma, plataforma);
        ARRAY_DIAS *arrayDias = create_dynarray_dias(size_dias);
        pagenda->dias = *arrayDias;

        found_estudio->agendas.n_agendas++;
        sort_agendas(found_estudio);
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
    printf("Id: %d Porta Estudio: %d ; Numero Agendas: %d\n", found_estudio->id_estudio, found_estudio->numero_porta,
           found_estudio->agendas.n_agendas);
    for (int i = 0; i < found_estudio->agendas.n_agendas; i++) {
        printf("Id: %d Plataforma: %s\n", agenda->id_agenda, agenda->plataforma);
        agenda++;
    }
}

/*-------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[DIAS]---------------------------------------------------*/

ARRAY_DIAS *create_dynarray_dias(int initsize) {
    ARRAY_DIAS *parray_dias = (ARRAY_DIAS *) calloc(1, sizeof(ARRAY_DIAS));
    parray_dias->pdias = (DIA *) calloc(initsize, sizeof(DIA));
    parray_dias->size_dias = initsize;

    return parray_dias;
}

void insert_dia(AGENDA *found_agenda, int dia, int mes, int ano) {
    if (found_agenda != NULL) {
        if (found_agenda->dias.n_dias >= found_agenda->dias.size_dias) {
            found_agenda->dias.size_dias *= 2;
            found_agenda->dias.pdias = (DIA *) realloc(found_agenda->dias.pdias,
                                                       found_agenda->dias.size_dias * sizeof(DIA));
        }
        DIA *pdia = found_agenda->dias.pdias + found_agenda->dias.n_dias;
        pdia->dia = dia;
        pdia->mes = mes;
        pdia->ano = ano;
        LISTA_EVENTOS *listaEventos = create_lista_eventos();
        pdia->eventos = *listaEventos;

        found_agenda->dias.n_dias++;
        sort_dias(found_agenda);
    }
}

DIA *find_dia(const AGENDA *found_agenda, int dia, int mes, int ano) {
    DIA *d = found_agenda->dias.pdias;
    int i = 0;
    while (i<found_agenda->dias.n_dias) {
        if (d->dia == dia && d->mes == mes && d->ano == ano) return d;
        d++;
        i++;
    }
    return NULL;
}

void sort_dias(AGENDA *found_agenda) {
    int i, j;
    ARRAY_DIAS *arrayDias = &found_agenda->dias;
    DIA *dia = arrayDias->pdias;
    for (i = 0; i < arrayDias->n_dias; i++) {
        DIA key = dia[i];
        j = i - 1;
        while (j >= 0 && (dia[j].ano > key.ano || dia[j].ano == key.ano && dia[j].mes > key.mes ||
                          dia[j].ano == key.ano && dia[j].mes == key.mes && dia[j].dia > key.dia)) {
            dia[j + 1] = dia[j];
            j = j - 1;
        }
        dia[j + 1] = key;
    }
}

void print_dias(const AGENDA *found_agenda) {
    DIA *dia = found_agenda->dias.pdias;
    for (int i = 0; i < found_agenda->dias.n_dias; i++) {
        printf("DIA:%d MES:%d ANO:%d\n", dia->dia, dia->mes, dia->ano);
        dia++;
    }
}

/*-------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[EVENTOS]---------------------------------------------------*/

LISTA_EVENTOS *create_lista_eventos(void) {
    LISTA_EVENTOS *leventos = (LISTA_EVENTOS *) calloc(1, sizeof(LISTA_EVENTOS));
    leventos->peventos = NULL;
    return leventos;
}

void historico_estadias(LISTA_EDIFICIOS *listaEdificios, LISTA_HOSPEDES *listaHospedes) {
    int day, month, year;
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);

    day = local->tm_mday;            // get day of month (1 to 31)
    month = local->tm_mon + 1;       // get month of year (0 to 11)
    year = local->tm_year + 1900;    // get year since 1900
    printf("Date is : %02d/%02d/%d\n", day, month, year);

    LISTA_EVENTOS *historico = create_lista_eventos();
    EDIFICIO *edificio = listaEdificios->pedificios;
    for (int i = 0; i < listaEdificios->n_edificios; i++) {
        ESTUDIO *estudio = edificio->estudios.pestudios;
        for (int j = 0; j < edificio->estudios.n_estudios; j++) {
            printf("%d\n", estudio->numero_porta);
            AGENDA *agenda = estudio->agendas.pagendas;
            for (int k = 0; k < estudio->agendas.n_agendas; k++) {
                printf("%s\n", agenda->plataforma);
                DIA *dia = agenda->dias.pdias;
                for (int l = 0; l < agenda->dias.n_dias; l++) {
                    printf("%d %d %d\n", dia->dia, dia->mes, dia->ano);
                    EVENTO *e = dia->eventos.peventos;
                    printf("%d\n", dia->eventos.n_eventos);
                    int n = 0;
                    if (e != NULL) {
                        while (n < dia->eventos.n_eventos) {
                            n++;
                            if (e->hospede_id != -1 && (dia->ano < year || dia->ano == year && dia->mes < month ||
                                                        dia->ano == year && dia->mes == month && dia->dia < day)) {
                                historico->peventos = e;
                                printf("idEvento: %d | %s | idHosp: %d\n", historico->peventos->hospede_id,
                                       historico->peventos->nome, historico->peventos->hospede_id);
                                HOSPEDE *hospede = find_hospede(listaHospedes, e->hospede_id);
                                historico->peventos = historico->peventos->pevento_next;
                                printf("idHosp: %d | Nome: %s\n", hospede->id, hospede->nome);
                                e = e->pevento_next;
                            } else e = e->pevento_next;
                        }
                    }
                    dia++;
                }
                agenda++;
            }
            estudio++;
        }
        edificio = edificio->edf_next;
    }
}

void insert_evento(DIA *found_dia, int id_evento, char *nome, int hospede_id, int dia_inicio, int dia_fim) {
    EVENTO *e = (EVENTO *) calloc(1, sizeof(EVENTO));
    id_eventos++;
    e->id_evento = id_evento;
    e->nome = (char *) malloc(sizeof(char) * strlen(nome));
    strcpy(e->nome, nome);
    e->hospede_id = hospede_id;
    e->dia_inicio = dia_inicio;
    e->dia_fim = dia_fim;
    e->pevento_next = NULL;

    EVENTO *ppre = NULL, *pcur = found_dia->eventos.peventos;
    while (pcur != NULL && dia_inicio > pcur->dia_inicio) {
        ppre = pcur;
        pcur = pcur->pevento_next;
    }

    if (pcur == found_dia->eventos.peventos) {
        e->pevento_next = found_dia->eventos.peventos;
        found_dia->eventos.peventos = e;
        found_dia->eventos.n_eventos++;
        return;
    }
    e->pevento_next = pcur;
    ppre->pevento_next = e;
    found_dia->eventos.n_eventos++;
}

EVENTO *find_evento(const DIA *found_dia, int id_evento) {
    EVENTO *e = found_dia->eventos.peventos;
    while (e != NULL) {
        if (e->id_evento == id_evento) return e;
        e = e->pevento_next;
    }
    return NULL;
}

void remove_evento(DIA *found_dia, EVENTO *found_evento) {
    EVENTO *ppre = NULL, *pcur = found_dia->eventos.peventos;
    while (pcur != found_evento && pcur != NULL) {
        ppre = pcur;
        pcur = pcur->pevento_next;
    }
    if (found_dia->eventos.peventos == found_evento) { //Primeiro
        found_dia->eventos.peventos = pcur->pevento_next;
        found_dia->eventos.n_eventos--;
        free(pcur);
        return;
    }
    if (found_dia->eventos.peventos->pevento_next == found_evento) {
        found_dia->eventos.peventos->pevento_next = pcur->pevento_next;
        found_dia->eventos.n_eventos--;
        free(pcur);
        return;
    }
    ppre->pevento_next = pcur->pevento_next;
    free(pcur);
    found_dia->eventos.n_eventos--;
}

void change_evento_info(DIA *found_dia, EVENTO *found_evento, char *nome, int hospede_id, int dia_inicio, int dia_fim) {
    EVENTO *ppre = NULL, *pcur = found_dia->eventos.peventos;
    while (pcur != found_evento && pcur != NULL) {
        ppre = pcur;
        pcur = pcur->pevento_next;
    }
    if (pcur == found_dia->eventos.peventos) {
        found_dia->eventos.peventos = pcur->pevento_next;
        pcur = found_dia->eventos.peventos;
    } else {
        ppre->pevento_next = pcur->pevento_next;
        ppre = NULL, pcur = found_dia->eventos.peventos;
    }

    strcpy(found_evento->nome, nome);
    found_evento->hospede_id = hospede_id;
    found_evento->dia_inicio = dia_inicio;
    found_evento->dia_fim = dia_fim;
    /*Colocar o edificio alterado na posição correta, na lista, tendo em conta a  morada*/
    while (pcur != NULL && dia_inicio > pcur->dia_inicio) {
        ppre = pcur;
        pcur = pcur->pevento_next;
    }
    if (pcur == found_dia->eventos.peventos) {
        found_evento->pevento_next = found_dia->eventos.peventos;
        found_dia->eventos.peventos = found_evento;
        return;
    }
    found_evento->pevento_next = pcur;
    ppre->pevento_next = found_evento;
}

void save_eventos_txt(LISTA_EDIFICIOS *listaEdificios, char filename[]) {
    FILE *arquivoAgendas = NULL;

    if ((arquivoAgendas = fopen(filename, "w")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }
    EDIFICIO *edificio = listaEdificios->pedificios;
    for (int i = 0; i < listaEdificios->n_edificios; i++) {
        for (int j = 0; j < edificio->estudios.n_estudios; j++) {
            ESTUDIO *estudio = binary_search_estudio(listaEdificios, edificio->id_edificio,
                                                     edificio->estudios.pestudios[j].numero_porta);
            if (estudio->agendas.n_agendas != 0) {
                fprintf(arquivoAgendas, "idEdificio: %d\n", edificio->id_edificio);
                fprintf(arquivoAgendas, "Porta: %d SizeAgendas: %d\n", estudio->numero_porta,
                        estudio->agendas.n_agendas);
            }
            for (int k = 0; k < estudio->agendas.n_agendas; k++) {
                AGENDA *agenda;
                agenda = find_agenda(estudio, estudio->agendas.pagendas->id_agenda);
                fprintf(arquivoAgendas, "%d | %s | %d | %d\n", agenda->id_agenda, agenda->plataforma,
                        agenda->dias.size_dias, agenda->dias.n_dias);

                for (int l = 0; l < agenda->dias.n_dias; l++) {
                    DIA *dia = find_dia(agenda, agenda->dias.pdias->dia, agenda->dias.pdias->mes,
                                        agenda->dias.pdias->ano);

                    fprintf(arquivoAgendas, "\t%d | %d | %d\n", dia->dia, dia->mes, dia->ano);
                    fprintf(arquivoAgendas, "\tNumero eventos: %d\n", dia->eventos.n_eventos);

                    EVENTO *evento = dia->eventos.peventos;

                    for (int m = 0; m < dia->eventos.n_eventos; m++) {
                        evento = find_evento(dia, evento->id_evento);
                        fprintf(arquivoAgendas, "\t\t%d | %s | %d | %d | %d\n", evento->id_evento, evento->nome,
                                evento->hospede_id, evento->dia_inicio, evento->dia_fim);
                        evento = evento->pevento_next;
                    }
                    agenda->dias.pdias++;
                }
                estudio->agendas.pagendas++;
            }
            edificio->estudios.pestudios++;
        }
        edificio = edificio->edf_next;
    }
    fclose(arquivoAgendas);
    printf("Sucesso\n");
}

void read_eventos_txt(LISTA_EDIFICIOS *listaEdificios, char filename[]) {
    FILE *arquivoAgendas;
    if ((arquivoAgendas = fopen(filename, "r")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }
    int idEdf = 0, portaEst = 0, nAgendas = 0, idAgenda = 0, sizedias = 0, ndias = 0, nEventos = 0, dia, mes, ano, idEvento, idHospede, diaInicio, diafim;
    char plataforma[20] = {}, nome[20] = {};
    while (arquivoAgendas != NULL) {
        if (feof(arquivoAgendas)) break;

        fscanf(arquivoAgendas, "%*s %d %*s %d %*s %d", &idEdf, &portaEst, &nAgendas);
        for (int i = 0; i < nAgendas; i++) {
            fscanf(arquivoAgendas, "%d %*c %s %*c %d %*c %d", &idAgenda, plataforma, &sizedias, &ndias);
            EDIFICIO *found_edf = find_edificio(listaEdificios, idEdf);
            ESTUDIO *found_estudio = binary_search_estudio(listaEdificios, found_edf->id_edificio, portaEst);
            if (idAgenda > id_agendas) {
                id_agendas = idAgenda + 1;
            }
            id_agendas--;
            insert_agenda(found_estudio, idAgenda, plataforma, sizedias);
            for (int j = 0; j < ndias; j++) {
                fscanf(arquivoAgendas, "%d %*c %d %*c %d", &dia, &mes, &ano);
                fscanf(arquivoAgendas, "%*s %*s %d", &nEventos);

                AGENDA *found_agenda = find_agenda(found_estudio, idAgenda - 1);
                insert_dia(found_agenda, dia, mes, ano);
                for (int k = 0; k < nEventos; k++) {
                    fscanf(arquivoAgendas, "%d %*c %s %*c %d %*c %d %*c %d", &idEvento, nome, &idHospede, &diaInicio,
                           &diafim);
                    if (idEvento > id_eventos) {
                        id_eventos = idEvento + 1;
                    }
                    id_eventos--;
                    DIA *found_dia = find_dia(found_agenda, dia, mes, ano);
                    insert_evento(found_dia, idEvento, nome, idHospede, diaInicio, diafim);
                    //print_eventos(found_dia);
                    printf("\n");
                }
                //print_dias(found_agenda);
                //printf("\n");
            }
            //print_agendas(found_estudio);
            //print_estudios(found_edf);
            printf("\n");
        }
    }
    //print_edificios(listaEdificios);
    fclose(arquivoAgendas);
}

void save_eventos_bin(LISTA_EDIFICIOS *listaEdificios, char filename[]) {
    FILE *fileAgnEvn = NULL;

    if ((fileAgnEvn = fopen(filename, "wb")) == NULL) {
        printf("Erro %s\n", filename);
        return;
    }
    EDIFICIO *edificio = listaEdificios->pedificios;
    for (int i = 0; i < listaEdificios->n_edificios; i++) {
        ESTUDIO *estudio = edificio->estudios.pestudios;
        for (int j = 0; j < edificio->estudios.n_estudios; j++) {
            if (estudio->agendas.n_agendas != 0) {
                fwrite(&edificio->id_edificio, sizeof(int), 1, fileAgnEvn);
                fwrite(&estudio->numero_porta, sizeof(int), 1, fileAgnEvn);
                fwrite(&estudio->agendas.n_agendas, sizeof(int), 1, fileAgnEvn);
                printf("%d", estudio->agendas.n_agendas);
            }
            AGENDA *agenda = estudio->agendas.pagendas;
            for (int k = 0; k < estudio->agendas.n_agendas; k++) {
                fwrite(&agenda->id_agenda, sizeof(int), 1, fileAgnEvn);
                int size_plataforma = strlen(agenda->plataforma) + 1;
                fwrite(&size_plataforma, sizeof(int), 1, fileAgnEvn);
                fwrite(agenda->plataforma, sizeof(char), size_plataforma, fileAgnEvn);
                fwrite(&agenda->dias.n_dias, sizeof(int), 1, fileAgnEvn);
                fwrite(&agenda->dias.size_dias, sizeof(int), 1, fileAgnEvn);
                DIA *dia = agenda->dias.pdias;
                for (int l = 0; l < agenda->dias.n_dias; l++) {
                    fwrite(&dia->dia, sizeof(int), 1, fileAgnEvn);
                    fwrite(&dia->mes, sizeof(int), 1, fileAgnEvn);
                    fwrite(&dia->ano, sizeof(int), 1, fileAgnEvn);
                    fwrite(&dia->eventos.n_eventos, sizeof(int), 1, fileAgnEvn);
                    EVENTO *evento = dia->eventos.peventos;
                    for (int m = 0; m < dia->eventos.n_eventos; m++) {
                        fwrite(&evento->id_evento, sizeof(int), 1, fileAgnEvn);
                        int size_evento = strlen(evento->nome) + 1;
                        fwrite(&size_evento, sizeof(int), 1, fileAgnEvn);
                        fwrite(evento->nome, sizeof(char), size_evento, fileAgnEvn);
                        fwrite(&evento->hospede_id, sizeof(int), 1, fileAgnEvn);
                        fwrite(&evento->dia_inicio, sizeof(int), 1, fileAgnEvn);
                        fwrite(&evento->dia_fim, sizeof(int), 1, fileAgnEvn);
                        evento = evento->pevento_next;
                    }
                    dia++;
                }
                agenda++;
            }
            estudio++;
        }
        edificio = edificio->edf_next;
    }
    fclose(fileAgnEvn);
    printf("Sucesso\n");
}

void read_eventos_bin(LISTA_EDIFICIOS *listaEdificios, char filename[]) {
    FILE *fileAgnEvn = NULL;
    if ((fileAgnEvn = fopen(filename, "rb")) == NULL) {
        printf("Erro %s\n", filename);
        return;
    }
    int id_edf, freadValue;

    while ((freadValue = fread(&id_edf, sizeof(int), 1, fileAgnEvn)) != 0) {
        int porta_est, n_agendas;
        fread(&porta_est, sizeof(int), 1, fileAgnEvn);
        fread(&n_agendas, sizeof(int), 1, fileAgnEvn);
        printf("%d", n_agendas);
        EDIFICIO *found_edf = find_edificio(listaEdificios, id_edf);
        ESTUDIO *found_estudio = binary_search_estudio(listaEdificios, found_edf->id_edificio, porta_est);
        for (int i = 0; i < n_agendas && found_estudio->agendas.pagendas != NULL; ++i) {
            int id_agenda, size_plataforma, n_dias, size_dias;
            char plataforma[200];
            fread(&id_agenda, sizeof(int), 1, fileAgnEvn);
            fread(&size_plataforma, sizeof(int), 1, fileAgnEvn);
            fread(plataforma, sizeof(char), size_plataforma, fileAgnEvn);
            fread(&n_dias, sizeof(int), 1, fileAgnEvn);
            fread(&size_dias, sizeof(int), 1, fileAgnEvn);
            insert_agenda(found_estudio, id_agenda, plataforma, size_dias);
            AGENDA *found_agenda = find_agenda(found_estudio, id_agenda);
            if (id_agenda > id_agendas) {
                id_agendas = id_agenda + 1;
            }
            id_agendas--;
            for (int j = 0; j < n_dias; ++j) {
                int dia, mes, ano, n_eventos;
                fread(&dia, sizeof(int), 1, fileAgnEvn);
                fread(&mes, sizeof(int), 1, fileAgnEvn);
                fread(&ano, sizeof(int), 1, fileAgnEvn);
                fread(&n_eventos, sizeof(int), 1, fileAgnEvn);
                insert_dia(found_agenda, dia, mes, ano);
                DIA *found_dia = find_dia(found_agenda, dia, mes, ano);
                for (int k = 0; k < n_eventos; ++k) {
                    int id_evento, size_nome, id_hospede, data_i, data_f;
                    char nome[50];
                    fread(&id_evento, sizeof(int), 1, fileAgnEvn);
                    fread(&size_nome, sizeof(int), 1, fileAgnEvn);
                    fread(nome, sizeof(char), size_nome, fileAgnEvn);
                    fread(&id_hospede, sizeof(int), 1, fileAgnEvn);
                    fread(&data_i, sizeof(int), 1, fileAgnEvn);
                    fread(&data_f, sizeof(int), 1, fileAgnEvn);
                    insert_evento(found_dia, id_evento, nome, id_hospede, data_i, data_f);
                    if (id_evento > id_eventos) {
                        id_eventos = id_evento + 1;
                    }
                    id_eventos--;
                }
            }
        }
    }
    fclose(fileAgnEvn);
    printf("Sucesso\n");
}


void print_eventos(const DIA *found_dia) {
    EVENTO *e = found_dia->eventos.peventos;
    for (int i = 0; i < found_dia->eventos.n_eventos; i++) {
        printf("ID: %d Nome: %s Hospede: %d Dia Inicio: %d Dia Fim: %d\n", e->id_evento, e->nome, e->hospede_id,
               e->dia_inicio, e->dia_fim);
        e = e->pevento_next;
    }
}

/*-------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[HOSPEDES]---------------------------------------------------*/

LISTA_HOSPEDES *create_lista_hospedes(void) {
    LISTA_HOSPEDES *lh = (LISTA_HOSPEDES *) calloc(1, sizeof(LISTA_HOSPEDES));
    lh->phospedes = NULL;
    return lh;
}

void insert_hospedes_ordered(LISTA_HOSPEDES *lista_hospedes, int id_hospede, char nome[]) {
    HOSPEDE *hospede = (HOSPEDE *) calloc(1, sizeof(HOSPEDE));
    id_hospedes++;
    hospede->id = id_hospede;
    hospede->nome = (char *) malloc(sizeof(char) * strlen(nome) + 1);
    strcpy(hospede->nome, nome);
    hospede->phospede_next = NULL;

    HOSPEDE *ppre = NULL, *pcur = lista_hospedes->phospedes;
    while (pcur != NULL && strcmp(nome, pcur->nome) > 0) {
        ppre = pcur;
        pcur = pcur->phospede_next;
    }
    if (pcur == lista_hospedes->phospedes) {
        hospede->phospede_next = lista_hospedes->phospedes;
        lista_hospedes->phospedes = hospede;
        lista_hospedes->n_hospedes++;
        return;
    }
    hospede->phospede_next = pcur;
    ppre->phospede_next = hospede;
    lista_hospedes->n_hospedes++;
}

HOSPEDE *find_hospede(const LISTA_HOSPEDES *lista_hospedes, int id_hospede) {
    HOSPEDE *h = lista_hospedes->phospedes;
    while (h != NULL) {
        if (h->id == id_hospede) return h;
        h = h->phospede_next;
    }
    return NULL;
}

void remove_hospede_ordered(LISTA_HOSPEDES *lista_hospedes,
                            HOSPEDE *found_hospede) { //TODO DAR FREE NOS ESTUDIOS/AGENDAS/...
    HOSPEDE *ppre = NULL, *pcur = lista_hospedes->phospedes;
    while (pcur != found_hospede && pcur != NULL) {
        ppre = pcur;
        pcur = pcur->phospede_next;
    }
    if (lista_hospedes->phospedes == found_hospede) { //Primeiro
        lista_hospedes->phospedes = pcur->phospede_next;
        lista_hospedes->n_hospedes--;
        free(pcur);
        return;
    }
    if (lista_hospedes->phospedes->phospede_next == found_hospede) {
        lista_hospedes->phospedes->phospede_next = pcur->phospede_next;
        lista_hospedes->n_hospedes--;
        free(pcur);
        return;
    }
    ppre->phospede_next = pcur->phospede_next;
    free(pcur);
    lista_hospedes->n_hospedes--;
}

void
change_hospede_info(LISTA_HOSPEDES *lista_hospedes, HOSPEDE *found_hospede, char nome[]) {
    HOSPEDE *ppre = NULL, *pcur = lista_hospedes->phospedes;
    while (pcur != NULL && pcur != found_hospede) {
        ppre = pcur;
        pcur = pcur->phospede_next;
    }
    if (pcur == lista_hospedes->phospedes) {
        lista_hospedes->phospedes = pcur->phospede_next;
        pcur = lista_hospedes->phospedes;
    } else {
        ppre->phospede_next = pcur->phospede_next;
        ppre = NULL, pcur = lista_hospedes->phospedes;
    }
    strcpy(found_hospede->nome, nome);
    while (pcur != NULL && strcmp(nome, pcur->nome) > 0) {
        ppre = pcur;
        pcur = pcur->phospede_next;
    }
    if (pcur == lista_hospedes->phospedes) {
        found_hospede->phospede_next = lista_hospedes->phospedes;
        lista_hospedes->phospedes = found_hospede;
        return;
    }
    found_hospede->phospede_next = pcur;
    ppre->phospede_next = found_hospede;
}

void print_hospedes(const LISTA_HOSPEDES *lista_Hospedes) {
    HOSPEDE *h = lista_Hospedes->phospedes;
    for (int i = 0; i < lista_Hospedes->n_hospedes; i++) {
        printf("ID: %d Nome: %s\n", h->id, h->nome);
        h = h->phospede_next;
    }
}

void data_hoje(void) {
    int day, month, year;
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);

    day = local->tm_mday;            // get day of month (1 to 31)
    month = local->tm_mon + 1;       // get month of year (0 to 11)
    year = local->tm_year + 1900;    // get year since 1900
    printf("Date is : %02d/%02d/%d\n", day, month, year);
}

/*-------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[PLATAFORMAS]---------------------------------------------------*/

ARRAY_PLATAFORMAS *create_dynarray_plataformas(int initsize) {
    ARRAY_PLATAFORMAS *pplataformas = (ARRAY_PLATAFORMAS *) calloc(1, sizeof(ARRAY_PLATAFORMAS));
    pplataformas->pplataformas = (PLATAFORMA *) calloc(initsize, sizeof(PLATAFORMA));
    pplataformas->size_plataformas = initsize;

    return pplataformas;
}

void insert_plataforma_politica(ARRAY_PLATAFORMAS *plataformas, char nome[], char politica[], int size_regras) {
    if (plataformas->n_plataformas >= plataformas->size_plataformas) {
        plataformas->size_plataformas *= 2;
        plataformas->pplataformas = (PLATAFORMA *) realloc(plataformas->pplataformas,
                                                           plataformas->size_plataformas * sizeof(PLATAFORMA));
    }
    PLATAFORMA *pplataforma = plataformas->pplataformas + plataformas->n_plataformas;
    pplataforma->nome = (char *) malloc(sizeof(char) * strlen(nome) + 1);
    strcpy(pplataforma->nome, nome);

    pplataforma->politica = (POLITICA *) calloc(1, sizeof(POLITICA));
    pplataforma->politica->politica = (char *) malloc(sizeof(char) * strlen(politica) + 1);
    strcpy(pplataforma->politica->politica, politica);

    pplataforma->politica->regras = (REGRA_CUSTO *) calloc(size_regras, sizeof(REGRA_CUSTO));
    pplataforma->politica->size_regras = size_regras;
    plataformas->n_plataformas++;
}

void print_plataforma_politica(const ARRAY_PLATAFORMAS *plataformas) {
    PLATAFORMA *plataforma = plataformas->pplataformas;
    for (int i = 0; i < plataformas->n_plataformas; i++) {
        printf("PLATAFORMA: %s POLITICA: %s NUM REGRAS: %d\n", plataforma->nome, plataforma->politica->politica,
               plataforma->politica->n_regras);
        plataforma++;
    }
}

PLATAFORMA *find_plataforma(const ARRAY_PLATAFORMAS *plataformas, char nome[]) {
    PLATAFORMA *plataforma = plataformas->pplataformas;
    int i = 0;
    while (i != plataformas->n_plataformas) {
        if (strcmp(plataforma->nome, nome) == 0) return plataforma;
        plataforma++;
        i++;
    }
    return NULL;
}

void remove_plataforma_politica(ARRAY_PLATAFORMAS *plataformas, char nome[]) {
    PLATAFORMA *plataforma = find_plataforma(plataformas, nome);
    if (plataforma != NULL) {
        int i = 0;
        while (i != plataformas->size_plataformas) {
            *plataforma = *(plataforma + 1);
            plataforma++;
            i++;
        }
        if (i == plataformas->n_plataformas) {
            strcpy(plataforma->nome, NULL);
            plataforma->politica = NULL;
        }
        plataformas->n_plataformas--;
    }
}

void save_plataformas_txt(ARRAY_PLATAFORMAS * plataformas, char filename[]) {
    FILE *arquivoPlataformas = NULL;

    if ((arquivoPlataformas = fopen(filename, "w")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }
    fprintf(arquivoPlataformas, "Numero de plataformas: %d\n", plataformas->n_plataformas);
    for (int i = 0; i < plataformas->n_plataformas; i++) {
        PLATAFORMA *pl = find_plataforma(plataformas, plataformas->pplataformas[i].nome);
        fprintf(arquivoPlataformas,
                "Plataforma: %s\n", pl->nome);
        POLITICA *politica = pl->politica;
        fprintf(arquivoPlataformas, "\tPolitica: %s | Numero de regras: %d\n", politica->politica, politica->n_regras);
        REGRA_CUSTO * regras = politica->regras;
        for (int j = 0; j < politica->n_regras; j++) {
            fprintf(arquivoPlataformas, "\t\t %s | %.2f \n", regras->regra, regras->ajuste);
            regras++;
        }
    }
    fclose(arquivoPlataformas);
    printf("Sucesso\n");
}

void save_plataformas_bin(ARRAY_PLATAFORMAS *plataformas, char filename[]) {
    FILE *filePlataformas = NULL;

    if ((filePlataformas = fopen(filename, "wb")) == NULL) {
        printf("Erro %s\n", filename);
        return;
    }
    PLATAFORMA *plataforma = plataformas->pplataformas;
    fwrite(&plataformas->n_plataformas, sizeof(int), 1, filePlataformas);
    for (int i = 0; i < plataformas->n_plataformas; i++) {
        int size_plataforma = strlen(plataforma->nome) + 1;
        fwrite(&size_plataforma, sizeof(int), 1, filePlataformas);
        fwrite(plataforma->nome, sizeof(char), size_plataforma, filePlataformas);
        int size_politica = strlen(plataforma->politica->politica) + 1;
        fwrite(&size_politica, sizeof(int), 1, filePlataformas);
        fwrite(plataforma->politica->politica, sizeof(char), size_politica, filePlataformas);
        fwrite(&plataforma->politica->n_regras, sizeof(int), 1, filePlataformas);
        REGRA_CUSTO *regraCusto = plataforma->politica->regras;
        for (int j = 0; j < plataforma->politica->n_regras; j++) {
            int size_regra = strlen(regraCusto->regra) + 1;
            fwrite(&size_regra, sizeof(int), 1, filePlataformas);
            fwrite(regraCusto->regra, sizeof(char), size_regra, filePlataformas);
            fwrite(&regraCusto->ajuste, sizeof(float), 1, filePlataformas);
            regraCusto++;
        }
        plataforma++;
    }
    fclose(filePlataformas);
    printf("Sucesso\n");
}

void read_plataformas_bin(ARRAY_PLATAFORMAS * plataformas, char filename[]){
    FILE *filePlataformas = NULL;
    if ((filePlataformas = fopen(filename, "rb")) == NULL) {
        printf("Erro %s\n", filename);
        return;
    }
    int n_plataformas;
    fread(&n_plataformas, sizeof(int), 1, filePlataformas);
    for (int i = 0; i < n_plataformas; i++) {
        int n_regras, size_plataforma, size_politica;
        char plataforma[200] ={}, politica[200]={};
        fread(&size_plataforma, sizeof(int), 1, filePlataformas);
        fread(plataforma, sizeof(char), size_plataforma, filePlataformas);
        fread(&size_politica, sizeof(int), 1, filePlataformas);
        fread(politica, sizeof(char), size_politica, filePlataformas);
        fread(&n_regras, sizeof(int), 1, filePlataformas);
        insert_plataforma_politica(plataformas, plataforma, politica,3);
        PLATAFORMA *pl = find_plataforma(plataformas, plataforma);
        for (int j = 0; j < n_regras; j++) {
            int size_regra;
            float ajuste;
            char regra[200]={};
            fread(&size_regra, sizeof(int), 1, filePlataformas);
            fread(regra, sizeof(char), size_regra, filePlataformas);
            fread(&ajuste, sizeof(float), 1, filePlataformas);
            insert_regra(pl->politica, regra,ajuste);
        }
    }
    fclose(filePlataformas);
    printf("Sucesso\n");
}

void
read_plataformas_txt(ARRAY_PLATAFORMAS * plataformas, char filename[]) {
    FILE *arquivoPlataformas;
    if ((arquivoPlataformas = fopen(filename, "r")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }
    char nomeplat[20], nomePol[20], regra[10];
    float ajuste = 0;
    int size, nplat = 0, n_regras;

    fscanf(arquivoPlataformas, "%*[^:]:%d", &nplat);
    while (arquivoPlataformas != NULL && plataformas->n_plataformas < nplat) {
        fscanf(arquivoPlataformas, "%*[^:]:%s %*[^:]:%s | %*[^:]:%d", nomeplat, nomePol, &n_regras);
        insert_plataforma_politica(plataformas, nomeplat, nomePol, 3);
        PLATAFORMA * pl = plataformas->pplataformas;
        POLITICA * politica = pl->politica;
        while (arquivoPlataformas != NULL && politica->n_regras < n_regras) {
            fscanf(arquivoPlataformas, "%s | %f ", regra, &ajuste);
            insert_regra(politica, regra, ajuste);
        }
    }
    fclose(arquivoPlataformas);
}

/*-------------------------------------------------------------------------------------------------------------------*/


/*-------------------------------------------------[REGRAS DE CUSTO]-------------------------------------------------*/

void insert_regra(POLITICA *politica, char regra[], float ajuste) {
    if (politica->n_regras >= politica->size_regras) {
        politica->size_regras *= 2;
        politica->regras = (REGRA_CUSTO *) realloc(politica->regras,
                                                   politica->size_regras * sizeof(REGRA_CUSTO));
    }
    REGRA_CUSTO *regraCusto = politica->regras + politica->n_regras;
    regraCusto->regra = (char *) malloc(sizeof(char) * strlen(regra) + 1);
    strcpy(regraCusto->regra, regra);
    regraCusto->ajuste = ajuste;

    politica->n_regras++;
}

REGRA_CUSTO *find_regra(const POLITICA *politica, char regra[]) {
    REGRA_CUSTO *regraCusto = politica->regras;
    while (regraCusto != NULL) {
        if (strcmp(regraCusto->regra, regra)) return regraCusto;
        regraCusto++;
    }
    printf("ERRO: Regra inserida nao existe no programa!");
    return NULL;
}

void remove_regra(POLITICA *politica, char regra[]) {
    REGRA_CUSTO *regraCusto = find_regra(politica, regra);
    if (regraCusto != NULL) {
        int i = 0;
        while (i != politica->size_regras) {
            *regraCusto = *(regraCusto + 1);
            regraCusto++;
            i++;
        }
        if (i == politica->n_regras) {
            strcpy(regraCusto->regra, NULL);
            regraCusto->ajuste = 0;
        }
        politica->n_regras--;
    } else printf("ERRO: Regra inserida nao existe no programa!");
}

void change_regra(POLITICA *politica, char regra[], float ajuste) {
    REGRA_CUSTO *regraCusto = find_regra(politica, regra);
    if (regraCusto != NULL) {
        strcpy(regraCusto->regra, regra);
        regraCusto->ajuste = ajuste;
    } else printf("ERRO: Regra inserida nao existe no programa!");
}

void print_regras(const POLITICA *politica) {
    REGRA_CUSTO *regraCusto = politica->regras;
    printf("POLITICA: %s\n", politica->politica);
    for (int i = 0; i < politica->n_regras; i++) {
        printf("REGRA: %s AJUSTE: %.2f\n", regraCusto->regra, regraCusto->ajuste);
        regraCusto++;
    }
}