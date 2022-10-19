#ifndef ESTRATEGIA_H_
#define ESTRATEGIA_H_

typedef void (*impresionLista_func_t)(void *);  // puntero al metodo   

typedef struct {

    char * tipo;
    impresionLista_func_t impresionLista_func;

}estrategia_t;

estrategia_t * NuevoEstrategia();
void estrategia_ctor(estrategia_t *);
void estrategia_dtor(estrategia_t  *);

void Organizador_get_tipo(estrategia_t*, char *); //va a revisar que tipo de estrategia va a utilizar 
void Estrategia_imprime(estrategia_t);


#endif 