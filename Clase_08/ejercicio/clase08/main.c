#include <stdio.h>
#include <stdlib.h>
//typedef  int Persona;

typedef struct
{
    char nombre [70];
    int edad;
    char dni[20];
    float altura;

}Persona;


void printPersona(Persona per)
{
    printf("Nombre: %s\n Edad: %d\n Altura: %.2f\n DNI: %s", per.nombre, per.edad, per.altura, per.dni  );

}

int main()
{
    Persona p;
    p.edad = 23;
    p.altura = 1.81;


    //p.nombre= "Juan";
    strncpy(p.dni, "38710355", 20);
    strncpy(p.nombre,"jair", 70);
    printPersona(p);

    return 0;

}
