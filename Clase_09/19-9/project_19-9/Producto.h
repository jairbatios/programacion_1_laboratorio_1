#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
 struct S_Producto {
    char nombre[30];
    char descripcion [70];
    float precio;
    int isEmpty;
};
typedef struct S_Producto Producto;

void prod_inicializar(Producto* array, int cantidad);
void ingreseData(Producto* array, int index);
int prod_getEmptyIndex(Producto* array, int len);
#endif // PRODUCTO_H_INCLUDED
