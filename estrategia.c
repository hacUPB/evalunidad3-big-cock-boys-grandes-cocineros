#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estrategia.h"

estrategia_t *NuevoEstrategia()
{

    return (estrategia_t *)malloc(sizeof(estrategia_t)); //instancio la estrategia 

}

void Lista(void * arreglo){

    char *Parreglo = malloc(sizeof(Parreglo)); // la estrategia 

    strcpy(Parreglo, "No hay estrategia");
    printf("%s", Parreglo);
    free(Parreglo);

}
/*void estrategia_ctor(estrategia_t * this){
    this->tipo = &Lista; //indica la direccion de memoria donde se va almacenar el dato
}*/
void estrategia_dtor(estrategia_t * this){

    free(this);
}



