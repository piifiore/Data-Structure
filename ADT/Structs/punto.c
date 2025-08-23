#include "punto.h"
#include <stdlib.h>
#include <math.h>

/* Definizione nascosta della struttura */
struct pto {
    float x;
    float y;
};

punto creaPunto(float x, float y) {
    punto p = malloc(sizeof *p);
    if (p == NULL) {
        return NULL;
    }
    p->x = x;
    p->y = y;
    return p;
}

float ascissa(punto p) {
    return p->x;
}

float ordinata(punto p) {
    return p->y;
}

float distanza(punto p1, punto p2) {
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrtf(dx * dx + dy * dy);
}

