#include "estrategiaB.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
static char EstrategiaB_Organizar_Arreglo (Estrategia const * const me,  char arreglo[5]);
static char EstrategiaB_Imprimir_Arreglo (Estrategia const * const me, char arreglo[5]);

void EstrategiaB_ctor(EstrategiaB * const me, int type, char arreglo[5])
{
    static struct EstrategiaVtb const vtb = {
        &EstrategiaB_Organizar_Arreglo,
        &EstrategiaB_Imprimir_Arreglo
    };
    Estrategia_ctor(&me->superclase, 1, arreglo);
    me->superclase.vptr = &vtb;
}

char EstrategiaB_Imprimir_Arreglo(Estrategia const * const me, char arreglo[5])
{
    char cadena = EstrategiaB_Organizar_Arreglo(me, arreglo);
    printf("%s", cadena);
}

char EstrategiaB_Organizar_Arreglo(Estrategia const * const me, char arreglo[5])
{
    char cadenaorganizada = arreglo[4] + ',' + arreglo[3] + ',' + arreglo[2] + ',' + arreglo[1] + ',' + arreglo[0];
    return cadenaorganizada;    
}