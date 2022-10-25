#ifndef ESTRATEGIAB_H_
#define ESTRATEGIAB_H_

#include "estrategia.h"
typedef struct
{
    Estrategia superclase;
} EstrategiaB;

void EstrategiaB_ctor(EstrategiaB * const me, int type, char arreglo[5]);

#endif