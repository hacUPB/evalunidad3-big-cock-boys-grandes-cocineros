#ifndef CONTESTO
#define CONTESTO
#include "estrategia.h"
typedef struct
{
    Estrategia* Estrategia;
}contesto_t;

contesto_t* contesto_nuevo();
EstrategiaTipo(contesto_t*, Estrategia);
#endif
