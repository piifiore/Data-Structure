#ifndef BIBLIOTECA_H  // Inizia la guardia di inclusione per evitare inclusioni multiple dello stesso header
#define BIBLIOTECA_H  // Definisce un simbolo unico per indicare che questo file è già incluso




 typedef struct Libro
{
    char *titolo;
    char *autore;
    int annoPubblicazione;
    struct Libro *prossimo;
}Libro;


typedef struct ListaLibri
{
    Libro *primo; 
}ListaLibri;

//prototipi delle funzioni

// //Semantica: Aggiunge libro alla lista
// 	Pre: La lista esiste 
// 	Post: Il libro viene aggiunto alla lista
void AggiungiLibro(ListaLibri *lista, char *titolo, char *autore, int annoPubblicazione);

// Semantica: Rimuove libro dalla lista in base al titolo
// Pre: La lista esiste e non e' vuota
// Post: Il libro viene tolto dalla lista
void RimuoviLIbro(ListaLibri *lista, char *titolo);

// Semantica: Trova il libro in base al titolo
// Pre: La lista esiste
// Post: Restituisce il puntatore al libro se trovato, altrimenti NULL.
Libro CercaLibro(ListaLibri *lista, char *titolo);


// Semantica: restituisce la lista di libri
// Pre: La lista esiste
// Post: Restituisce la lista completa all'utente
void StampaListaLibri(ListaLibri *lista);




#endif // BIBLIOTECA_H  // Termina la guardia di inclusione