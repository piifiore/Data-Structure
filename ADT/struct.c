#include <stdio.h>
#include <math.h>
#include "punto.h"

punto creaPunto(float x, float y)
{
  punto p;
  p.x = x;
  p.y = y;
  return p;
}

float ascissa(punto p)
{
  return p.x;
}

float ordinata (punto p)
{
  return p.y;
}

float distanza (punto p1, punto p2)
{
  float dx = p1.x - p2.x;
  float dy = p1.y - p2.y;
  float d = sqrt(dx*dx + dy*dy);
  return d;
}





int main()
{



punto p = creaPunto(7, 5);
punto q = creaPunto(0, 0);

printf("ordinara di p -->%f, ascissa di p --> %f\n", ordinata(p), ascissa(p));

printf("ordinara di q-->%f, ascissa di q --> %f\n", ordinata(q), ascissa(q));



printf("la distanza tra p e q equivale a: %f", distanza(p, q));



}


