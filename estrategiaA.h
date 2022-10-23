#ifndef ESTRATEGIAA_H_
#define ESTRATEGIAA_H_

#include "estrategia.h"

typedef struct
{
    Estrategia superclase;
} EstrategiaA;

void EstrategiaA_ctor(EstrategiaA * const me, int type, char arreglo[5]);

#endif