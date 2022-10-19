#ifndef ESTRATEGIAB_H_
#define ESTRATEGIAB_H_

#include "estrategia.h"
typedef struct 
{
    estrategia_t estrategia;
    
}estrategiaB_t;

void estrategia_ctor(estrategiaB_t);

void estrategia_dtor(estrategiaB_t);
#endif