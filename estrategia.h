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
    void (*Organizar)(Estrategia const * const me);
    void (*Imprimir)(Estrategia const * const me);
};

void Estrategia_ctor(Estrategia * const me, int tipo, char arreglo[5] );
int DefinirTipo(Estrategia const * const me);

static inline void Organizar_Arreglo(Estrategia const * const me)
{
    (*me->vptr->Organizar)(me);
}
static inline void Imprimir_Arreglo(Estrategia const * const me)
{
    (*me->vptr->Imprimir)(me);
}


#endif 