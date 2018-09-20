#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"
#include "Producto.c"

int main()
{
    int index;
    int proxIndex;
    Producto arrayProductos[200];
    prod_inicializar(&arrayProductos,200);
    index=prod_getEmptyIndex(&arrayProductos,200);
    ingreseData(&arrayProductos, index);
    printf("Precio:%.2f",arrayProductos[index].precio);
    proxIndex=prod_getEmptyIndex(&arrayProductos, 200);
    //printf("La proxima posicion vacia es %d", proxIndex);
}
