#include <stdio.h>
#include <stdlib.h>
#include "punto.h"

int main(void) {
  
    punto a = creaPunto(3.0f, 4.0f);
    punto b = creaPunto(0.0f, 0.0f);

    /* Controllo dell’avvenuta allocazione */
    if (a == NULL || b == NULL) {
        fprintf(stderr, "Errore: impossibile allocare memoria per i punti\n");
        free(a);
        free(b);
        return EXIT_FAILURE;
    }

    /* Stampa delle coordinate */
    printf("Punto a: (%.2f, %.2f)\n", ascissa(a), ordinata(a));
    printf("Punto b: (%.2f, %.2f)\n", ascissa(b), ordinata(b));

    /* Calcolo e stampa della distanza */
    float dist = distanza(a, b);
    printf("Distanza tra a e b: %.2f\n", dist);

    /* Rilascio della memoria */
    free(a);
    free(b);

    return EXIT_SUCCESS;
}



