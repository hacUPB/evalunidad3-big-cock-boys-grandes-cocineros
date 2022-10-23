#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estrategia.h"
#include <assert.h>

static void Organizar_Arreglo(Estrategia const * const me);
static void Imprimir_Arreglo(Estrategia const * const me);

void Estrategia_ctor(Estrategia * const me, int type, char arreglo[5])
{
    static struct EstrategiaVtb const vtb1 = 
    {
        &Organizar_Arreglo,
        &Imprimir_Arreglo
    };
    me->vptr = &vtb1;
    me->tipo = type;
    for(int i = 0; i<5; i++)
    {
        me->cadena[i] = arreglo[i]; 
    }
}


