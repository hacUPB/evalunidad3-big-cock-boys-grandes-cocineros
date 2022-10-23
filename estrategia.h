#ifndef ESTRATEGIA_H_
#define ESTRATEGIA_H_

#include <stdint.h>

struct EstrategiaVtb;

typedef struct {
    struct EstrategiaVtb const *vptr;
    int tipo;
    char cadena[5];
}Estrategia;

struct EstrategiaVtb
{
    char (*Organizar)(Estrategia const * const me);
    char (*Imprimir)(Estrategia const * const me);
};

void Estrategia_ctor(Estrategia * const me, int tipo, char arreglo[5] );

static inline char Organizar_Arreglo(Estrategia const * const me)
{
    (*me->vptr->Organizar)(me);
}
static inline char Imprimir_Arreglo(Estrategia const * const me)
{
    (*me->vptr->Imprimir)(me);
}


#endif 