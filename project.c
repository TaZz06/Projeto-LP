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

int main_project(int argc, const char *argv[]) {
    int size = 10;

    LISTA_EDIFICIOS *le = create_lista_edificios();
   /* insert_edificio_ordered(le, id_edificios, "f", -12.0, 3.0, size);
    insert_edificio_ordered(le,id_edificios,"o", -125453, 434125, size);
    insert_edificio_ordered(le,id_edificios, "k", -13213, 478785, size);
    insert_edificio_ordered(le,id_edificios, "z", -123, 495, size);
    insert_edificio_ordered(le,id_edificios, "a", -0.4, 90, size);
    insert_edificio_ordered(le,id_edificios, "b", -0.04, 56, size);
    //print_edificios(le);

    EDIFICIO *findEd = find_edificio(le, 0);
    insert_estudio_ordered(findEd, id_estudios, 121, T0, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd,id_estudios, 122, T1, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd,id_estudios, 123, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd,id_estudios, 113, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd,id_estudios, 132, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd,id_estudios, 128, T0, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd,id_estudios, 127, T1, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd,id_estudios, 155, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd,id_estudios, 129, T4, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd,id_estudios, 111, T2, 3, 50, 600, 0, 120);
    insert_estudio_ordered(findEd,id_estudios, 145, T4, 3, 50, 600, 0, 120);
    ESTUDIO *found_estudio = binary_search_estudio(findEd, findEd->estudios.n_estudios, 121);*/
    // printf("Id Estudio: %d Porta: %d",found_estudio->id_estudio, found_estudio->numero_porta);
    //change_estudio_info(findEd, found_estudio, 133, T3, 4, 60, 200, 10, 130);
    //print_estudios(findEd);
    char file_EdfEst_TXT[] = "../data/ficheirostxt/EdfEst_TXT.txt";
    char file_EdfEst_BIN[] = "../data/ficheirosbin/EdfEst_BIN.txt";
    //save_edificios_txt(le, file_EdfEst_TXT);
    read_edificios_txt(le, file_EdfEst_TXT);
    //save_edificios_bin(le, file_EdfEst_BIN);
    //read_edificios_bin(le, file_EdfEst_BIN);
    print_edificios(le);
    EDIFICIO *findEd = find_edificio(le, 0);
    print_estudios(findEd);

    ESTUDIO *found_estudio = binary_search_estudio(findEd, findEd->estudios.n_estudios, 121);
    insert_agenda(found_estudio, "Master", 3);
    insert_agenda(found_estudio, "AirBnA", 3);
    insert_agenda(found_estudio, "AirBnB", 3);
    insert_agenda(found_estudio, "AirBnC", 3);

    //print_agendas(found_estudio);

    AGENDA *found_agenda = find_agenda(found_estudio, 2);
    //printf("%s\n", found_agenda->plataforma);
    /*remove_agenda(found_estudio, found_agenda);*/
    print_agendas(found_estudio);
    printf("\n");
    insert_dia(found_agenda, 10, 03, 2022);
    insert_dia(found_agenda, 1, 01, 2021);
    insert_dia(found_agenda, 2, 01, 2021);
    insert_dia(found_agenda, 4, 02, 2022);
    insert_dia(found_agenda, 5, 1, 2021);
    insert_dia(found_agenda, 9, 03, 2022);
    insert_dia(found_agenda, 1, 01, 2021);
    insert_dia(found_agenda, 14, 01, 2021);
    insert_dia(found_agenda, 20, 02, 2022);
    insert_dia(found_agenda, 30, 1, 2021);
    print_dias(found_agenda);
    DIA *found_dia = find_dia(found_agenda, 30, 1, 2021);

    found_dia->eventos = *create_lista_eventos();
    insert_evento(found_dia, "Manuntencao", -1, 3, 5);
    insert_evento(found_dia, "Estadia", 5, 7, 3);
    insert_evento(found_dia, "Limpeza", -1, 5, 4);
    insert_evento(found_dia, "Reuniao", 12, 31, 9);
    insert_evento(found_dia, "Limpeza", -1, 30, 10);
    insert_evento(found_dia, "Estadia", 1, 29, 11);
    insert_evento(found_dia, "Manuntencao", -1, 11, 12);

    //EVENTO *found_evento = find_evento(found_dia, 2);
    //printf("%s\n", found_evento->nome);
    //print_eventos(found_dia);
    /*remove_evento(found_dia, found_evento);
    print_eventos(found_dia);*/
    /*change_evento_info(found_dia, found_evento, "nhonho", 666, 69, 30);
    print_eventos(found_dia);*/
    char file_AgendaEv_TXT[] = "../data/ficheirostxt/AgendaEv_TXT.txt";
    char file_AgendaEv_BIN[] = "../data/ficheirosbin/AgendaEv_BIN.txt";
    save_eventos_txt(le, file_AgendaEv_TXT);


    return 0;
}
/**------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[EDIFICIOS]---------------------------------------------------*/

LISTA_EDIFICIOS *create_lista_edificios(void) {
    LISTA_EDIFICIOS *le = (LISTA_EDIFICIOS *) calloc(1, sizeof(LISTA_EDIFICIOS));
    le->pedificios = NULL;
    return le;
}

void insert_edificio_ordered(LISTA_EDIFICIOS *lista_edificios, int id_edificio, char morada_edificio[], float latitude,
                             float longitude,
                             int size_estudios) {
    EDIFICIO *edificio = (EDIFICIO *) calloc(1, sizeof(EDIFICIO));
    id_edificios++;
    edificio->id_edificio = id_edificio;
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
    fprintf(arquivoEdificios, "Numero de edificios: %d\n", listaEdificios->n_edificios);
    for (int i = 0; i < listaEdificios->n_edificios; i++) {
        EDIFICIO *ed = find_edificio(listaEdificios, listaEdificios->pedificios->id_edificio);
        fprintf(arquivoEdificios,
                "%d | %s | %.3f | %.3f | %d\n",
                ed->id_edificio,
                ed->edf_morada, ed->latitude, ed->longitude, ed->estudios.size_estudios);
        ESTUDIO *a = ed->estudios.pestudios;
        fprintf(arquivoEdificios, "\tNumero de estudios: %d\n", ed->estudios.n_estudios);
        for (int j = 0; j < ed->estudios.n_estudios; j++) {
            fprintf(arquivoEdificios, "\t\t%d | %d | %s | %d | %.3f | %.3f | %.3f | %d\n", a->id_estudio,
                    a->numero_porta, a->config, a->agendas.size_agendas, a->preco_dia, a->preco_mensal, a->preco_final,
                    a->area);
            a++;
        }
        listaEdificios->pedificios = listaEdificios->pedificios->edf_next;
    }
    fclose(arquivoEdificios);
    printf("Sucesso\n");
}

void read_edificios_txt(LISTA_EDIFICIOS *listaEdificios, char filename[]) { //TODO Id's modificados na insert depois da read
    FILE *arquivoEdificios;
    if ((arquivoEdificios = fopen(filename, "r")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }
    char aux1[20], aux2[20];
    float latitude = 0, longitude = 0, p_dia, p_mes, p_final;
    int size, n1 = 0, n2 = 0, porta, area, id_edf, id_est;

    fscanf(arquivoEdificios, "%*[^:]:%d", &n1);
    while (arquivoEdificios != NULL && listaEdificios->n_edificios < n1) {
        fscanf(arquivoEdificios, "%d | %[^|] | %f | %f | %d", &id_edf, aux1, &latitude, &longitude, &size);
        insert_edificio_ordered(listaEdificios, id_edf, aux1, latitude, longitude, size);

        EDIFICIO *e = find_edificio(listaEdificios, id_edf);
        fscanf(arquivoEdificios, "%*[^:]:%d", &n2);
        while (e->estudios.n_estudios < n2) {
            fscanf(arquivoEdificios, "%d | %d | %[^|] | %d | %f | %f | %f | %d |", &id_est, &porta,
                   aux2,
                   &size, &p_dia, &p_mes, &p_final, &area);
            insert_estudio_ordered(e, id_est, porta, aux2, size, p_dia, p_mes, p_final,
                                   area);
        }
        print_estudios(e);
    }
    print_edificios(listaEdificios);
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
            fwrite(&a->preco_dia, sizeof(float), 1, fileEdfEst);
            fwrite(&a->preco_mensal, sizeof(float), 1, fileEdfEst);
            fwrite(&a->preco_final, sizeof(float), 1, fileEdfEst);
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
        float latitude = 0, longitude = 0;
        char morada[200];
        fread(&id_edf, sizeof(int), 1, fileEdfEst);
        fread(&size_morada, sizeof(int), 1, fileEdfEst);
        fread(morada, sizeof(char), size_morada, fileEdfEst);
        fread(&latitude, sizeof(float), 1, fileEdfEst);
        fread(&longitude, sizeof(float), 1, fileEdfEst);
        fread(&size_estudios, sizeof(int), 1, fileEdfEst);

        insert_edificio_ordered(listaEdificios, id_edf, morada, latitude, longitude, size_estudios);
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
            fread(&preco_dia, sizeof(float), 1, fileEdfEst);
            fread(&preco_mes, sizeof(float), 1, fileEdfEst);
            fread(&preco_final, sizeof(float), 1, fileEdfEst);
            fread(&area, sizeof(int), 1, fileEdfEst);

            insert_estudio_ordered(found_edf, idEst, n_porta, config, size_agendas, preco_dia, preco_mes, preco_final,
                                   area);
        }
    }
    fclose(fileEdfEst);
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

void insert_estudio_ordered(EDIFICIO *edificio, int id_estudio, int porta, char config[MAXCONFIG], int size_agendas,
                            float p_dia,
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
            id_estudios++;
            pestudio->id_estudio = id_estudio;
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

ESTUDIO *binary_search_estudio(const EDIFICIO *found_edificio, int n, int numero_porta) {
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
        printf("\tID: %d PORTA: %d CONFIG: %s PRECO_DIA: %.3f PRECO_MES: %.3f PRECO_FINAL: %.3f AREA: %d\n",
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

    if (found_estudio != NULL) {
        if (found_estudio->agendas.n_agendas >= found_estudio->agendas.size_agendas) {
            found_estudio->agendas.size_agendas *= 2;
            found_estudio->agendas.pagendas = (AGENDA *) realloc(found_estudio->agendas.pagendas,
                                                                 found_estudio->agendas.size_agendas * sizeof(AGENDA));
        }
        AGENDA *pagenda = found_estudio->agendas.pagendas + found_estudio->agendas.n_agendas;
        pagenda->id_agenda = id_agendas++;
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
    for (int i = 0; i < found_estudio->agendas.n_agendas; i++) {
        printf("Id: %d Plataforma: %s\n", agenda->id_agenda, agenda->plataforma);
        agenda++;
    }
}

/**------------------------------------------------------------------------------------------------------------------*/


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
    while (d != NULL) {
        if (d->dia == dia && d->mes == mes && d->ano == ano) return d;
        d++;
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

/**------------------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------[EVENTOS]---------------------------------------------------*/

LISTA_EVENTOS *create_lista_eventos(void) {
    LISTA_EVENTOS *leventos = (LISTA_EVENTOS *) calloc(1, sizeof(LISTA_EVENTOS));
    leventos->peventos = NULL;
    return leventos;
}

void insert_evento(DIA *found_dia, char *nome, int hospede_id, int dia_inicio, int dia_fim) {
    EVENTO *e = (EVENTO *) calloc(1, sizeof(EVENTO));
    e->id_evento = id_eventos++;
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
        edificio = find_edificio(listaEdificios, edificio->id_edificio);
        for (int j = 0; j < edificio->estudios.n_estudios; j++) {
            ESTUDIO *estudio = binary_search_estudio(edificio, edificio->estudios.n_estudios,
                                                     edificio->estudios.pestudios[j].numero_porta);
            fprintf(arquivoAgendas, "Estudio: %d Numero de Agendas: %d", estudio->numero_porta,
                    estudio->agendas.n_agendas);
            for (int k = 0; k < estudio->agendas.n_agendas; k++) {
                AGENDA * agenda;
                agenda = find_agenda(estudio, estudio->agendas.pagendas->id_agenda);
                fprintf(arquivoAgendas, "\nAgenda: %d | %s",agenda->id_agenda, agenda->plataforma);

                for (int l = 0; l < agenda->dias.n_dias; l++) {
                    DIA * dia = find_dia(agenda, agenda->dias.pdias->dia, agenda->dias.pdias->mes,
                                        agenda->dias.pdias->ano);
                    fprintf(arquivoAgendas, "\n\n\tData: %d | %d | %d", dia->dia, dia->mes, dia->ano);
                    fprintf(arquivoAgendas, "\n\tNumero de eventos: %d", dia->eventos.n_eventos);
                    EVENTO * evento = dia->eventos.peventos;

                    for (int m = 0; m < dia->eventos.n_eventos; m++) {
                        evento = find_evento(dia, evento->id_evento);
                        fprintf(arquivoAgendas, "\n\t\tEvento: %d | %s | %d | %d | %d", evento->id_evento, evento->nome,
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

void print_eventos(const DIA *found_dia) {
    EVENTO *e = found_dia->eventos.peventos;
    for (int i = 0; i < found_dia->eventos.n_eventos; i++) {
        printf("ID: %d Nome: %s Hospede: %d Dia Inicio: %d Dia Fim: %d\n", e->id_evento, e->nome, e->hospede_id,
               e->dia_inicio, e->dia_fim);
        e = e->pevento_next;
    }
}