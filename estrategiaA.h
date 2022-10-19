#ifndef ESTRATEGIAA_H_
#define ESTRATEGIAA_H_

#include "estrategia.h"
typedef struct 
{
    estrategia_t estrategia;
    
}estrategiaA_t;

void estrategia_ctor(estrategiaA_t);

void estrategia_dtor(estrategiaA_t);
#endif