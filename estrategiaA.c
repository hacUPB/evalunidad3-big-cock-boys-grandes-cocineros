#include "estrategiaA.h"
#include <stdio.h>

static char EstrategiaA_Organizar_Arreglo (Estrategia const * const me);
static char EstrategiaA_Imprimir_Arreglo (Estrategia const * const me);

void EstrategiaA_ctor(EstrategiaA * const me, int type, char arreglo[5])
{
    static struct EstrategiaVtb const vtb = {
        &EstrategiaA_Organizar_Arreglo,
        &EstrategiaA_Imprimir_Arreglo
    };
    Estrategia_ctor(&me->superclase, 1, arreglo);
    me->superclase.vptr = &vtb;
}

char EstrategiaA_Imprimir_Arreglo(Estrategia const * const me)
{
    
}

char EstrategiaA_Organizar_Arreglo(Estrategia const * const me)
{
    
}