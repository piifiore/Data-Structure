#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"


void AggiungiLibro(ListaLibri *lista, char *titolo, char *autore, int annoPubblicazione)
{
    Libro *nuovo;

    nuovo = malloc(sizeof(Libro));

    if (nuovo != NULL)
    {
        nuovo-> annoPubblicazione = annoPubblicazione;
        nuovo-> titolo = strdup(titolo);
        nuovo-> autore = strdup(autore);
        nuovo -> prossimo = lista -> primo; //punta alla testa della lista

        lista ->primo = nuovo; //il primo elemento della lista diventa il nuovo libero
    }
    


}

void RimuoviLIbro(ListaLibri *lista, char *titolo)
{
    Libro *corrente = lista -> primo;
    Libro *precedente = NULL;

    while (corrente != NULL && strcmp(corrente -> titolo, titolo) != 0)
    {
        precedente = corrente;
        corrente = corrente -> prossimo;
    }

    if (corrente == NULL)
    {
        printf("Libro non trovato");
        return;
    } else
    {
        free(corrente);
        return;
    }

}

Libro CercaLibro(ListaLibri *lista, char *titolo)
{
    Libro *corrente = lista ->primo;
    Libro *precedente = corrente;

    while (corrente !=NULL && strcmp(corrente -> titolo , titolo) != 0)
    {
        precedente = corrente;
        corrente = corrente -> prossimo;
    }

    if (corrente == NULL)
    {
        printf("libro non trovato");
        return ;
    } else
    {
        return *corrente;
    }
    
    
    
}

void StampaListaLibri(ListaLibri *lista)
{
   Libro *corrente = lista ->primo;
    Libro *precedente = corrente;

    while (corrente !=NULL)
    {
        printf("Titolo:%s\n", corrente -> titolo);
        printf("Autore:%s\n", corrente -> autore);
        printf("Anno di uscita:%d\n", corrente -> annoPubblicazione);
        precedente = corrente;
        corrente = corrente -> prossimo;
    }

    
}