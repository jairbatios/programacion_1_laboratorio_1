#include <stdio.h>
#include <stdlib.h>
void prod_inicializar(Producto* array, int cantidad){

    int i;
    for(i=0; i<cantidad;i++){
        array[i].isEmpty=1;
    }
    __fpurge(stdin);
}

void ingreseData(Producto* array, int index){

    printf("Ingrese Nombre\n");
    fgets(array[index].nombre,25,stdin);
    printf("Ingrese Decripcion\n");
    fgets(array[index].descripcion,25,stdin);
    printf("Ingrese precio\n");
    array[index].isEmpty=0;
    scanf("%f",&array[index].precio);

}

int prod_getEmptyIndex(Producto* array, int len){
    int j;
    int retorno;
    for(j=0;j<len;j++){
        if(array[j].isEmpty==1){
            printf("\nLa posicion vacia es %d",j);
            retorno=j;
            break;
        }
    }
    return retorno;
}
