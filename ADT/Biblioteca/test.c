#include <stdio.h>
#include "Biblioteca.h"

int main(){

ListaLibri L;



AggiungiLibro(&L, "Il ritratto di Dorian Gay", "Oscar Wild", 1890);
AggiungiLibro(&L, "Il conte di MonteCazzo", "Ducazz", 1846);
AggiungiLibro(&L, "Cumbliners", "james Cockyce", 1914);

//StampaListaLibri(&L);

CercaLibro(&L, "il conte di MonteCazzo");

RimuoviLIbro(&L, "Il ritratto di Dorian Gay");

StampaListaLibri(&L);





}